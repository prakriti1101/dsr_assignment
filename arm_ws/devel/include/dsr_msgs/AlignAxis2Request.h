// Generated by gencpp from file dsr_msgs/AlignAxis2Request.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_ALIGNAXIS2REQUEST_H
#define DSR_MSGS_MESSAGE_ALIGNAXIS2REQUEST_H


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
struct AlignAxis2Request_
{
  typedef AlignAxis2Request_<ContainerAllocator> Type;

  AlignAxis2Request_()
    : target_vect()
    , source_vect()
    , axis(0)
    , ref(0)  {
      target_vect.assign(0.0);

      source_vect.assign(0.0);
  }
  AlignAxis2Request_(const ContainerAllocator& _alloc)
    : target_vect()
    , source_vect()
    , axis(0)
    , ref(0)  {
  (void)_alloc;
      target_vect.assign(0.0);

      source_vect.assign(0.0);
  }



   typedef boost::array<double, 3>  _target_vect_type;
  _target_vect_type target_vect;

   typedef boost::array<double, 3>  _source_vect_type;
  _source_vect_type source_vect;

   typedef int8_t _axis_type;
  _axis_type axis;

   typedef int8_t _ref_type;
  _ref_type ref;





  typedef boost::shared_ptr< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> const> ConstPtr;

}; // struct AlignAxis2Request_

typedef ::dsr_msgs::AlignAxis2Request_<std::allocator<void> > AlignAxis2Request;

typedef boost::shared_ptr< ::dsr_msgs::AlignAxis2Request > AlignAxis2RequestPtr;
typedef boost::shared_ptr< ::dsr_msgs::AlignAxis2Request const> AlignAxis2RequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dsr_msgs::AlignAxis2Request_<ContainerAllocator1> & lhs, const ::dsr_msgs::AlignAxis2Request_<ContainerAllocator2> & rhs)
{
  return lhs.target_vect == rhs.target_vect &&
    lhs.source_vect == rhs.source_vect &&
    lhs.axis == rhs.axis &&
    lhs.ref == rhs.ref;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dsr_msgs::AlignAxis2Request_<ContainerAllocator1> & lhs, const ::dsr_msgs::AlignAxis2Request_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dsr_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "03be7d4f574c1507e019c70fb99362be";
  }

  static const char* value(const ::dsr_msgs::AlignAxis2Request_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x03be7d4f574c1507ULL;
  static const uint64_t static_value2 = 0xe019c70fb99362beULL;
};

template<class ContainerAllocator>
struct DataType< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dsr_msgs/AlignAxis2Request";
  }

  static const char* value(const ::dsr_msgs::AlignAxis2Request_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#____________________________________________________________________________________________\n"
"# align_axis(target_vect, source_vect, axis, ref)\n"
"#____________________________________________________________________________________________\n"
"\n"
"float64[3] target_vect       # target vector[3]  \n"
"float64[3] source_vect       # source vector[3]  \n"
"int8       axis              # DR_AXIS_X(0), DR_AXIS_Y(1), DR_AXIS_Z(2) \n"
"int8       ref               # DR_BASE(0), DR_WORLD(2), user coord(101~200)\n"
"                             # <ref is only available in M2.40 or later> \n"
;
  }

  static const char* value(const ::dsr_msgs::AlignAxis2Request_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.target_vect);
      stream.next(m.source_vect);
      stream.next(m.axis);
      stream.next(m.ref);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AlignAxis2Request_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dsr_msgs::AlignAxis2Request_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dsr_msgs::AlignAxis2Request_<ContainerAllocator>& v)
  {
    s << indent << "target_vect[]" << std::endl;
    for (size_t i = 0; i < v.target_vect.size(); ++i)
    {
      s << indent << "  target_vect[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.target_vect[i]);
    }
    s << indent << "source_vect[]" << std::endl;
    for (size_t i = 0; i < v.source_vect.size(); ++i)
    {
      s << indent << "  source_vect[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.source_vect[i]);
    }
    s << indent << "axis: ";
    Printer<int8_t>::stream(s, indent + "  ", v.axis);
    s << indent << "ref: ";
    Printer<int8_t>::stream(s, indent + "  ", v.ref);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DSR_MSGS_MESSAGE_ALIGNAXIS2REQUEST_H