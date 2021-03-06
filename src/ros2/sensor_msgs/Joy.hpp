// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


/*! 
 * @file Joy.hpp
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */
#ifndef _SENSOR_MSGS_JOY_HPP_
#define _SENSOR_MSGS_JOY_HPP_


#include "../topic.hpp"

#include "../std_msgs/Header.hpp"

namespace sensor_msgs {

class Joy : public ros2::Topic<Joy>
{
public: 
    std_msgs::Header header;
    uint32_t axes_size;
    float axes[10];
    uint32_t buttons_size;
    int32_t buttons[10];

  Joy():
    Topic("sensor_msgs::msg::dds_::Joy_", "Joy", SENSOR_MSGS_JOY_ID),
    header(),
    axes_size(1), buttons_size(1)
  { 
    memset(axes, 0, sizeof(axes));
    memset(buttons, 0, sizeof(buttons));
  }

  bool serialize(void* msg_buf, const Joy* topic)
  {
    ucdrBuffer* writer = (ucdrBuffer*)msg_buf;
    (void) header.serialize(writer, &topic->header);
    
    (void) ucdr_serialize_sequence_float(writer, topic->axes, topic->axes_size);
    (void) ucdr_serialize_sequence_int32_t(writer, topic->buttons, topic->buttons_size);

    return !writer->error;
  }

  bool deserialize(void* msg_buf, Joy* topic)
  {
    ucdrBuffer* reader = (ucdrBuffer*)msg_buf;
    (void) header.deserialize(reader, &topic->header);
    
    (void) ucdr_deserialize_sequence_float(reader, topic->axes, sizeof(topic->axes)/sizeof(float), &topic->axes_size);
    (void) ucdr_deserialize_sequence_int32_t(reader, topic->buttons, sizeof(topic->buttons)/sizeof(int32_t), &topic->buttons_size);

    return !reader->error;
  }

  virtual uint32_t size_of_topic(const Joy* topic, uint32_t size)
  {
    uint32_t previousSize = size;
    size += header.size_of_topic(&topic->header, size);

    size += ucdr_alignment(size, 4) + 4;
    size += ucdr_alignment(size, 4) + (topic->axes_size * 4);

    size += ucdr_alignment(size, 4) + 4;
    size += ucdr_alignment(size, 4) + (topic->buttons_size * 4);

    return size - previousSize;
  }

};

} // namespace sensor_msgs


#endif // _SENSOR_MSGS_JOY_HPP_
