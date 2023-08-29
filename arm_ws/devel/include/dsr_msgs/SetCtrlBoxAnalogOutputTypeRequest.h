// Generated by gencpp from file dsr_msgs/SetCtrlBoxAnalogOutputTypeRequest.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_SETCTRLBOXANALOGOUTPUTTYPEREQUEST_H
#define DSR_MSGS_MESSAGE_SETCTRLBOXANALOGOUTPUTTYPEREQUEST_H


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
struct SetCtrlBoxAnalogOutputTypeRequest_
{
  typedef SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> Type;

  SetCtrlBoxAnalogOutputTypeRequest_()
    : channel(0)
    , mode(0)  {
    }
  SetCtrlBoxAnalogOutputTypeRequest_(const ContainerAllocator& _alloc)
    : channel(0)
    , mode(0)  {
  (void)_alloc;
    }



   typedef int8_t _channel_type;
  _channel_type channel;

   typedef int8_t _mode_type;
  _mode_type mode;





  typedef boost::shared_ptr< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetCtrlBoxAnalogOutputTypeRequest_

typedef ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<std::allocator<void> > SetCtrlBoxAnalogOutputTypeRequest;

typedef boost::shared_ptr< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest > SetCtrlBoxAnalogOutputTypeRequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest const> SetCtrlBoxAnalogOutputTypeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.channel == rhs.channel &&
    lhs.mode == rhs.mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cbbf4e2d3d62a486421395a6bcc060ce";
  }

  static const char* value(const ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcbbf4e2d3d62a486ULL;
  static const uint64_t static_value2 = 0x421395a6bcc060ceULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/SetCtrlBoxAnalogOutputTypeRequest";
  }

  static const char* value(const ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# set_ctrl_box_analog_output_type  \n"
"#____________________________________________________________________________________________\n"
"\n"
"int8        channel  # 1 = ch1, 2= ch2 \n"
"int8        mode     # 0 = current, 1 = voltage\n"
;
  }

  static const char* value(const ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.channel);
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetCtrlBoxAnalogOutputTypeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::SetCtrlBoxAnalogOutputTypeRequest_<ContainerAllocator>& v)
  {
    s << indent << "channel: ";
    Printer<int8_t>::stream(s, indent + "  ", v.channel);
    s << indent << "mode: ";
    Printer<int8_t>::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_SETCTRLBOXANALOGOUTPUTTYPEREQUEST_H
