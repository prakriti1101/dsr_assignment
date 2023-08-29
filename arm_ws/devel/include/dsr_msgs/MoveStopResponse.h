// Generated by gencpp from file dsr_msgs/MoveStopResponse.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_MOVESTOPRESPONSE_H
#define DSR_MSGS_MESSAGE_MOVESTOPRESPONSE_H


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
struct MoveStopResponse_
{
  typedef MoveStopResponse_<ContainerAllocator> Type;

  MoveStopResponse_()
    : success(false)  {
    }
  MoveStopResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MoveStopResponse_

typedef ::dsr_msgs::MoveStopResponse_<std::allocator<void> > MoveStopResponse;

typedef boost::shared_ptr< ::dsr_msgs::MoveStopResponse > MoveStopResponsePtr;
typedef boost::shared_ptr< ::dsr_msgs::MoveStopResponse const> MoveStopResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::MoveStopResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::MoveStopResponse_<ContainerAllocator1> & lhs, const ::dsr_msgs::MoveStopResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::MoveStopResponse_<ContainerAllocator1> & lhs, const ::dsr_msgs::MoveStopResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::dsr_msgs::MoveStopResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/MoveStopResponse";
  }

  static const char* value(const ::dsr_msgs::MoveStopResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::dsr_msgs::MoveStopResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveStopResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::MoveStopResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::MoveStopResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_MOVESTOPRESPONSE_H
