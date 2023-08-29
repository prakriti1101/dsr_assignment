// Generated by gencpp from file dsr_msgs/GetDesiredVelj.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_GETDESIREDVELJ_H
#define DSR_MSGS_MESSAGE_GETDESIREDVELJ_H

#include <ros/service_traits.h>


#include <dsr_msgs/GetDesiredVeljRequest.h>
#include <dsr_msgs/GetDesiredVeljResponse.h>


namespace dsr_msgs
{

struct GetDesiredVelj
{

typedef GetDesiredVeljRequest Request;
typedef GetDesiredVeljResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetDesiredVelj
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::GetDesiredVelj > {
  static const char* value()
  {
    return "88bf0c6c29b23cd493e33b3354d4f21a";
  }

  static const char* value(const ::dsr_msgs::GetDesiredVelj&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::GetDesiredVelj > {
  static const char* value()
  {
    return "dsr_msgs/GetDesiredVelj";
  }

  static const char* value(const ::dsr_msgs::GetDesiredVelj&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::GetDesiredVeljRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::GetDesiredVelj >
template<>
struct MD5Sum< ::dsr_msgs::GetDesiredVeljRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetDesiredVelj >::value();
  }
  static const char* value(const ::dsr_msgs::GetDesiredVeljRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetDesiredVeljRequest> should match
// service_traits::DataType< ::dsr_msgs::GetDesiredVelj >
template<>
struct DataType< ::dsr_msgs::GetDesiredVeljRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetDesiredVelj >::value();
  }
  static const char* value(const ::dsr_msgs::GetDesiredVeljRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::GetDesiredVeljResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::GetDesiredVelj >
template<>
struct MD5Sum< ::dsr_msgs::GetDesiredVeljResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetDesiredVelj >::value();
  }
  static const char* value(const ::dsr_msgs::GetDesiredVeljResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetDesiredVeljResponse> should match
// service_traits::DataType< ::dsr_msgs::GetDesiredVelj >
template<>
struct DataType< ::dsr_msgs::GetDesiredVeljResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetDesiredVelj >::value();
  }
  static const char* value(const ::dsr_msgs::GetDesiredVeljResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_GETDESIREDVELJ_H