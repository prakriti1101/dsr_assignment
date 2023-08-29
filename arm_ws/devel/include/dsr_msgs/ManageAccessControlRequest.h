// Generated by gencpp from file dsr_msgs/ManageAccessControlRequest.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_MANAGEACCESSCONTROLREQUEST_H
#define DSR_MSGS_MESSAGE_MANAGEACCESSCONTROLREQUEST_H


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
struct ManageAccessControlRequest_
{
  typedef ManageAccessControlRequest_<ContainerAllocator> Type;

  ManageAccessControlRequest_()
    : access_control(0)  {
    }
  ManageAccessControlRequest_(const ContainerAllocator& _alloc)
    : access_control(0)  {
  (void)_alloc;
    }



   typedef int8_t _access_control_type;
  _access_control_type access_control;





  typedef boost::shared_ptr< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ManageAccessControlRequest_

typedef ::dsr_msgs::ManageAccessControlRequest_<std::allocator<void> > ManageAccessControlRequest;

typedef boost::shared_ptr< ::dsr_msgs::ManageAccessControlRequest > ManageAccessControlRequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::ManageAccessControlRequest const> ManageAccessControlRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator2> & rhs)
{
  return lhs.access_control == rhs.access_control;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8909de201cd13857a3d12b9fc873e7d2";
  }

  static const char* value(const ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8909de201cd13857ULL;
  static const uint64_t static_value2 = 0xa3d12b9fc873e7d2ULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/ManageAccessControlRequest";
  }

  static const char* value(const ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# manage_access_control\n"
"#____________________________________________________________________________________________\n"
"\n"
"int8 access_control  # 0 : MANAGE_ACCESS_CONTROL_FORCE_REQUEST\n"
"                     # 1 : MANAGE_ACCESS_CONTROL_REQUEST\n"
"                     # 2 : MANAGE_ACCESS_CONTROL_RESPONSE_YES\n"
"                     # 3 : MANAGE_ACCESS_CONTROL_RESPONSE_NO\n"
;
  }

  static const char* value(const ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.access_control);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ManageAccessControlRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::ManageAccessControlRequest_<ContainerAllocator>& v)
  {
    s << indent << "access_control: ";
    Printer<int8_t>::stream(s, indent + "  ", v.access_control);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_MANAGEACCESSCONTROLREQUEST_H
