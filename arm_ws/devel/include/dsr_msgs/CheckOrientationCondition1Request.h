// Generated by gencpp from file dsr_msgs/CheckOrientationCondition1Request.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_CHECKORIENTATIONCONDITION1REQUEST_H
#define DSR_MSGS_MESSAGE_CHECKORIENTATIONCONDITION1REQUEST_H


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
struct CheckOrientationCondition1Request_
{
  typedef CheckOrientationCondition1Request_<ContainerAllocator> Type;

  CheckOrientationCondition1Request_()
    : axis(0)
    , min()
    , max()
    , ref(0)
    , mode(0)  {
      min.assign(0.0);

      max.assign(0.0);
  }
  CheckOrientationCondition1Request_(const ContainerAllocator& _alloc)
    : axis(0)
    , min()
    , max()
    , ref(0)
    , mode(0)  {
  (void)_alloc;
      min.assign(0.0);

      max.assign(0.0);
  }



   typedef int8_t _axis_type;
  _axis_type axis;

   typedef boost::array<double, 6>  _min_type;
  _min_type min;

   typedef boost::array<double, 6>  _max_type;
  _max_type max;

   typedef int8_t _ref_type;
  _ref_type ref;

   typedef int8_t _mode_type;
  _mode_type mode;





  typedef boost::shared_ptr< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> const> ConstPtr;

}; // struct CheckOrientationCondition1Request_

typedef ::dsr_msgs::CheckOrientationCondition1Request_<std::allocator<void> > CheckOrientationCondition1Request;

typedef boost::shared_ptr< ::dsr_msgs::CheckOrientationCondition1Request > CheckOrientationCondition1RequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::CheckOrientationCondition1Request const> CheckOrientationCondition1RequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator1> & lhs, const ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator2> & rhs)
{
  return lhs.axis == rhs.axis &&
    lhs.min == rhs.min &&
    lhs.max == rhs.max &&
    lhs.ref == rhs.ref &&
    lhs.mode == rhs.mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator1> & lhs, const ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ff3f2e92f56180e86192cf1a67188e5c";
  }

  static const char* value(const ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xff3f2e92f56180e8ULL;
  static const uint64_t static_value2 = 0x6192cf1a67188e5cULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/CheckOrientationCondition1Request";
  }

  static const char* value(const ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# check_orientation_condition(axis, min, max, ref, mod)  \n"
"#____________________________________________________________________________________________\n"
"\n"
"int8       axis              # DR_AXIS_A(10), DR_AXIS_B(11), DR_AXIS_C(12) \n"
"float64[6] min               # task pos(posx)  \n"
"float64[6] max               # task pos(posx)  \n"
"int8       ref  #= 0         # DR_BASE(0), DR_TOOL(1), DR_WORLD(2), user_coordinate(101~200)\n"
"                             # <DR_WORLD is only available in M2.40 or later> \n"
"int8       mode #= 0         # DR_MV_MOD_ABS(0)\n"
;
  }

  static const char* value(const ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.axis);
      stream.next(m.min);
      stream.next(m.max);
      stream.next(m.ref);
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CheckOrientationCondition1Request_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::CheckOrientationCondition1Request_<ContainerAllocator>& v)
  {
    s << indent << "axis: ";
    Printer<int8_t>::stream(s, indent + "  ", v.axis);
    s << indent << "min[]" << std::endl;
    for (size_t i = 0; i < v.min.size(); ++i)
    {
      s << indent << "  min[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.min[i]);
    }
    s << indent << "max[]" << std::endl;
    for (size_t i = 0; i < v.max.size(); ++i)
    {
      s << indent << "  max[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.max[i]);
    }
    s << indent << "ref: ";
    Printer<int8_t>::stream(s, indent + "  ", v.ref);
    s << indent << "mode: ";
    Printer<int8_t>::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_CHECKORIENTATIONCONDITION1REQUEST_H