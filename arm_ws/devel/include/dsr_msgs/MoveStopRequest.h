// Generated by gencpp from file dsr_msgs/MoveStopRequest.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_MOVESTOPREQUEST_H
#define DSR_MSGS_MESSAGE_MOVESTOPREQUEST_H


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
struct MoveStopRequest_
{
  typedef MoveStopRequest_<ContainerAllocator> Type;

  MoveStopRequest_()
    : stop_mode(0)  {
    }
  MoveStopRequest_(const ContainerAllocator& _alloc)
    : stop_mode(0)  {
  (void)_alloc;
    }



   typedef int32_t _stop_mode_type;
  _stop_mode_type stop_mode;





  typedef boost::shared_ptr< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveStopRequest_

typedef ::dsr_msgs::MoveStopRequest_<std::allocator<void> > MoveStopRequest;

typedef boost::shared_ptr< ::dsr_msgs::MoveStopRequest > MoveStopRequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::MoveStopRequest const> MoveStopRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::MoveStopRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::MoveStopRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::MoveStopRequest_<ContainerAllocator2> & rhs)
{
  return lhs.stop_mode == rhs.stop_mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::MoveStopRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::MoveStopRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "82712390efeed0d0668a551e004b332c";
  }

  static const char* value(const ::dsr_msgs::MoveStopRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x82712390efeed0d0ULL;
  static const uint64_t static_value2 = 0x668a551e004b332cULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/MoveStopRequest";
  }

  static const char* value(const ::dsr_msgs::MoveStopRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# stop()\n"
"# 인자 설명 추가 필요!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"
"#____________________________________________________________________________________________\n"
"\n"
"int32 stop_mode         # DR_QSTOP_STO(0) : Quick stop (Stop Category 1 without STO(Safe Torque Off)\n"
"                        # DR_QSTOP(1)     : Quick stop (Stop Category 2)\n"
"                        # DR_SSTO(2)      : Soft Stop\n"
"                        # DR_HOLD(3)      : HOLD stop\n"
;
  }

  static const char* value(const ::dsr_msgs::MoveStopRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stop_mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveStopRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::MoveStopRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::MoveStopRequest_<ContainerAllocator>& v)
  {
    s << indent << "stop_mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.stop_mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_MOVESTOPREQUEST_H
