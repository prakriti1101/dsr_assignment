// Generated by gencpp from file dsr_msgs/ParallelAxis1Request.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_PARALLELAXIS1REQUEST_H
#define DSR_MSGS_MESSAGE_PARALLELAXIS1REQUEST_H


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
struct ParallelAxis1Request_
{
  typedef ParallelAxis1Request_<ContainerAllocator> Type;

  ParallelAxis1Request_()
    : x1()
    , x2()
    , x3()
    , axis(0)
    , ref(0)  {
      x1.assign(0.0);

      x2.assign(0.0);

      x3.assign(0.0);
  }
  ParallelAxis1Request_(const ContainerAllocator& _alloc)
    : x1()
    , x2()
    , x3()
    , axis(0)
    , ref(0)  {
  (void)_alloc;
      x1.assign(0.0);

      x2.assign(0.0);

      x3.assign(0.0);
  }



   typedef boost::array<double, 6>  _x1_type;
  _x1_type x1;

   typedef boost::array<double, 6>  _x2_type;
  _x2_type x2;

   typedef boost::array<double, 6>  _x3_type;
  _x3_type x3;

   typedef int8_t _axis_type;
  _axis_type axis;

   typedef int8_t _ref_type;
  _ref_type ref;





  typedef boost::shared_ptr< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> const> ConstPtr;

}; // struct ParallelAxis1Request_

typedef ::dsr_msgs::ParallelAxis1Request_<std::allocator<void> > ParallelAxis1Request;

typedef boost::shared_ptr< ::dsr_msgs::ParallelAxis1Request > ParallelAxis1RequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::ParallelAxis1Request const> ParallelAxis1RequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator1> & lhs, const ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator2> & rhs)
{
  return lhs.x1 == rhs.x1 &&
    lhs.x2 == rhs.x2 &&
    lhs.x3 == rhs.x3 &&
    lhs.axis == rhs.axis &&
    lhs.ref == rhs.ref;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator1> & lhs, const ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "99451f85f6ee7a557b3692f3cf3f0e1e";
  }

  static const char* value(const ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x99451f85f6ee7a55ULL;
  static const uint64_t static_value2 = 0x7b3692f3cf3f0e1eULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/ParallelAxis1Request";
  }

  static const char* value(const ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# parallel_axis(x1, x2, x3, axis, ref)  \n"
"#____________________________________________________________________________________________\n"
"\n"
"float64[6] x1                # task pos(posx)  \n"
"float64[6] x2                # task pos(posx)  \n"
"float64[6] x3                # task pos(posx)\n"
"int8       axis              # DR_AXIS_X(0), DR_AXIS_Y(1), DR_AXIS_Z(2) \n"
"int8       ref        #= 0   # DR_BASE(0), DR_WORLD(2), user coord(101~200)\n"
"                             # <ref is only available in M2.40 or later> \n"
;
  }

  static const char* value(const ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x1);
      stream.next(m.x2);
      stream.next(m.x3);
      stream.next(m.axis);
      stream.next(m.ref);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ParallelAxis1Request_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::ParallelAxis1Request_<ContainerAllocator>& v)
  {
    s << indent << "x1[]" << std::endl;
    for (size_t i = 0; i < v.x1.size(); ++i)
    {
      s << indent << "  x1[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.x1[i]);
    }
    s << indent << "x2[]" << std::endl;
    for (size_t i = 0; i < v.x2.size(); ++i)
    {
      s << indent << "  x2[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.x2[i]);
    }
    s << indent << "x3[]" << std::endl;
    for (size_t i = 0; i < v.x3.size(); ++i)
    {
      s << indent << "  x3[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.x3[i]);
    }
    s << indent << "axis: ";
    Printer<int8_t>::stream(s, indent + "  ", v.axis);
    s << indent << "ref: ";
    Printer<int8_t>::stream(s, indent + "  ", v.ref);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_PARALLELAXIS1REQUEST_H
