// Generated by gencpp from file dsr_msgs/GetUserCartCoordRequest.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_GETUSERCARTCOORDREQUEST_H
#define DSR_MSGS_MESSAGE_GETUSERCARTCOORDREQUEST_H


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
struct GetUserCartCoordRequest_
{
  typedef GetUserCartCoordRequest_<ContainerAllocator> Type;

  GetUserCartCoordRequest_()
    : id(0)  {
    }
  GetUserCartCoordRequest_(const ContainerAllocator& _alloc)
    : id(0)  {
  (void)_alloc;
    }



   typedef int8_t _id_type;
  _id_type id;





  typedef boost::shared_ptr< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetUserCartCoordRequest_

typedef ::dsr_msgs::GetUserCartCoordRequest_<std::allocator<void> > GetUserCartCoordRequest;

typedef boost::shared_ptr< ::dsr_msgs::GetUserCartCoordRequest > GetUserCartCoordRequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::GetUserCartCoordRequest const> GetUserCartCoordRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator1> & lhs, const ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7d504299943ad968aabe3de24053d208";
  }

  static const char* value(const ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7d504299943ad968ULL;
  static const uint64_t static_value2 = 0xaabe3de24053d208ULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/GetUserCartCoordRequest";
  }

  static const char* value(const ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# posx, ref = get_user_cart_coord(id)   \n"
"#____________________________________________________________________________________________\n"
"# This service is only available in M2.50 or later\n"
"\n"
"int8       id                # ID of user coord \n"
;
  }

  static const char* value(const ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetUserCartCoordRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::GetUserCartCoordRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int8_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_GETUSERCARTCOORDREQUEST_H
