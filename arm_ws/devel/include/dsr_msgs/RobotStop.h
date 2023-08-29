// Generated by gencpp from file dsr_msgs/RobotStop.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_ROBOTSTOP_H
#define DSR_MSGS_MESSAGE_ROBOTSTOP_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dsr_msgs
{
template <class ContainerAllocator>
struct RobotStop_
{
  typedef RobotStop_<ContainerAllocator> Type;

  RobotStop_()
    : stop_mode(0)  {
    }
  RobotStop_(const ContainerAllocator& _alloc)
    : stop_mode(0)  {
  (void)_alloc;
    }



   typedef int32_t _stop_mode_type;
  _stop_mode_type stop_mode;





  typedef boost::shared_ptr< ::dsr_msgs::RobotStop_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::RobotStop_<ContainerAllocator> const> ConstPtr;

}; // struct RobotStop_

typedef ::dsr_msgs::RobotStop_<std::allocator<void> > RobotStop;

typedef boost::shared_ptr< ::dsr_msgs::RobotStop > RobotStopPtr;
typedef boost::shared_ptr< ::dsr_msgs::RobotStop const> RobotStopConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::RobotStop_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::RobotStop_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::RobotStop_<ContainerAllocator1> & lhs, const ::dsr_msgs::RobotStop_<ContainerAllocator2> & rhs)
{
  return lhs.stop_mode == rhs.stop_mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::RobotStop_<ContainerAllocator1> & lhs, const ::dsr_msgs::RobotStop_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::RobotStop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::RobotStop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::RobotStop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::RobotStop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::RobotStop_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::RobotStop_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::RobotStop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "82712390efeed0d0668a551e004b332c";
  }

  static const char* value(const ::dsr_msgs::RobotStop_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x82712390efeed0d0ULL;
  static const uint64_t static_value2 = 0x668a551e004b332cULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::RobotStop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/RobotStop";
  }

  static const char* value(const ::dsr_msgs::RobotStop_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::RobotStop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# [ robot stop mode ] \n"
"# 0 : STOP_TYPE_QUICK_STO\n"
"# 1 : STOP_TYPE_QUICK\n"
"# 2 : STOP_TYPE_SLOW\n"
"# 3 : STOP_TYPE_HOLD = STOP_TYPE_EMERGENCY\n"
"#\n"
"#____________________________________________________________________________________________\n"
"\n"
"int32 stop_mode  \n"
;
  }

  static const char* value(const ::dsr_msgs::RobotStop_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::RobotStop_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stop_mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotStop_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::RobotStop_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::RobotStop_<ContainerAllocator>& v)
  {
    s << indent << "stop_mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.stop_mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_ROBOTSTOP_H
