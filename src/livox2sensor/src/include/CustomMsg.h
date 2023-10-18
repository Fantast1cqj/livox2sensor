// Generated by gencpp from file livox_ros_driver2/CustomMsg.msg
// DO NOT EDIT!


#ifndef LIVOX_ROS_DRIVER2_MESSAGE_CUSTOMMSG_H
#define LIVOX_ROS_DRIVER2_MESSAGE_CUSTOMMSG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include "CustomPoint.h"

namespace livox_ros_driver2
{
template <class ContainerAllocator>
struct CustomMsg_
{
  typedef CustomMsg_<ContainerAllocator> Type;

  CustomMsg_()
    : header()
    , timebase(0)
    , point_num(0)
    , lidar_id(0)
    , rsvd()
    , points()  {
      rsvd.assign(0);
  }
  CustomMsg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , timebase(0)
    , point_num(0)
    , lidar_id(0)
    , rsvd()
    , points(_alloc)  {
  (void)_alloc;
      rsvd.assign(0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint64_t _timebase_type;
  _timebase_type timebase;

   typedef uint32_t _point_num_type;
  _point_num_type point_num;

   typedef uint8_t _lidar_id_type;
  _lidar_id_type lidar_id;

   typedef boost::array<uint8_t, 3>  _rsvd_type;
  _rsvd_type rsvd;

   typedef std::vector< ::livox_ros_driver2::CustomPoint_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::livox_ros_driver2::CustomPoint_<ContainerAllocator> >> _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> const> ConstPtr;

}; // struct CustomMsg_

typedef ::livox_ros_driver2::CustomMsg_<std::allocator<void> > CustomMsg;

typedef boost::shared_ptr< ::livox_ros_driver2::CustomMsg > CustomMsgPtr;
typedef boost::shared_ptr< ::livox_ros_driver2::CustomMsg const> CustomMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::livox_ros_driver2::CustomMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::livox_ros_driver2::CustomMsg_<ContainerAllocator1> & lhs, const ::livox_ros_driver2::CustomMsg_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.timebase == rhs.timebase &&
    lhs.point_num == rhs.point_num &&
    lhs.lidar_id == rhs.lidar_id &&
    lhs.rsvd == rhs.rsvd &&
    lhs.points == rhs.points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::livox_ros_driver2::CustomMsg_<ContainerAllocator1> & lhs, const ::livox_ros_driver2::CustomMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace livox_ros_driver2

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e4d6829bdfe657cb6c21a746c86b21a6";
  }

  static const char* value(const ::livox_ros_driver2::CustomMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe4d6829bdfe657cbULL;
  static const uint64_t static_value2 = 0x6c21a746c86b21a6ULL;
};

template<class ContainerAllocator>
struct DataType< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "livox_ros_driver2/CustomMsg";
  }

  static const char* value(const ::livox_ros_driver2::CustomMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Livox publish pointcloud msg format.\n"
"\n"
"std_msgs/Header header    # ROS standard message header\n"
"uint64 timebase           # The time of first point\n"
"uint32 point_num          # Total number of pointclouds\n"
"uint8  lidar_id           # Lidar device id number\n"
"uint8[3]  rsvd            # Reserved use\n"
"CustomPoint[] points      # Pointcloud data\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: livox_ros_driver2/CustomPoint\n"
"# Livox costom pointcloud format.\n"
"\n"
"uint32 offset_time      # offset time relative to the base time\n"
"float32 x               # X axis, unit:m\n"
"float32 y               # Y axis, unit:m\n"
"float32 z               # Z axis, unit:m\n"
"uint8 reflectivity      # reflectivity, 0~255\n"
"uint8 tag               # livox tag\n"
"uint8 line              # laser number in lidar\n"
"\n"
;
  }

  static const char* value(const ::livox_ros_driver2::CustomMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.timebase);
      stream.next(m.point_num);
      stream.next(m.lidar_id);
      stream.next(m.rsvd);
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CustomMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::livox_ros_driver2::CustomMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::livox_ros_driver2::CustomMsg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "timebase: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.timebase);
    s << indent << "point_num: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.point_num);
    s << indent << "lidar_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lidar_id);
    s << indent << "rsvd[]" << std::endl;
    for (size_t i = 0; i < v.rsvd.size(); ++i)
    {
      s << indent << "  rsvd[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.rsvd[i]);
    }
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::livox_ros_driver2::CustomPoint_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LIVOX_ROS_DRIVER2_MESSAGE_CUSTOMMSG_H
