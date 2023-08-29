// Generated by gencpp from file dsr_msgs/FkinResponse.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_FKINRESPONSE_H
#define DSR_MSGS_MESSAGE_FKINRESPONSE_H


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
struct FkinResponse_
{
  typedef FkinResponse_<ContainerAllocator> Type;

  FkinResponse_()
    : conv_posx()
    , success(false)  {
      conv_posx.assign(0.0);
  }
  FkinResponse_(const ContainerAllocator& _alloc)
    : conv_posx()
    , success(false)  {
  (void)_alloc;
      conv_posx.assign(0.0);
  }



   typedef boost::array<double, 6>  _conv_posx_type;
  _conv_posx_type conv_posx;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::dsr_msgs::FkinResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::FkinResponse_<ContainerAllocator> const> ConstPtr;

}; // struct FkinResponse_

typedef ::dsr_msgs::FkinResponse_<std::allocator<void> > FkinResponse;

typedef boost::shared_ptr< ::dsr_msgs::FkinResponse > FkinResponsePtr;
typedef boost::shared_ptr< ::dsr_msgs::FkinResponse const> FkinResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::FkinResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::FkinResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::FkinResponse_<ContainerAllocator1> & lhs, const ::dsr_msgs::FkinResponse_<ContainerAllocator2> & rhs)
{
  return lhs.conv_posx == rhs.conv_posx &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::FkinResponse_<ContainerAllocator1> & lhs, const ::dsr_msgs::FkinResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::FkinResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::FkinResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::FkinResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::FkinResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::FkinResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::FkinResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::FkinResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "904a2ae76f71ef4190bde0122093ec1b";
  }

  static const char* value(const ::dsr_msgs::FkinResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x904a2ae76f71ef41ULL;
  static const uint64_t static_value2 = 0x90bde0122093ec1bULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::FkinResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/FkinResponse";
  }

  static const char* value(const ::dsr_msgs::FkinResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::FkinResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[6] conv_posx         # task pos(posx)\n"
"bool       success \n"
;
  }

  static const char* value(const ::dsr_msgs::FkinResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::FkinResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.conv_posx);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FkinResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::FkinResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::FkinResponse_<ContainerAllocator>& v)
  {
    s << indent << "conv_posx[]" << std::endl;
    for (size_t i = 0; i < v.conv_posx.size(); ++i)
    {
      s << indent << "  conv_posx[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.conv_posx[i]);
    }
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_FKINRESPONSE_H
