// Generated by gencpp from file dsr_msgs/GetCurrentSolutionSpace.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_GETCURRENTSOLUTIONSPACE_H
#define DSR_MSGS_MESSAGE_GETCURRENTSOLUTIONSPACE_H

#include <ros/service_traits.h>


#include <dsr_msgs/GetCurrentSolutionSpaceRequest.h>
#include <dsr_msgs/GetCurrentSolutionSpaceResponse.h>


namespace dsr_msgs
{

struct GetCurrentSolutionSpace
{

typedef GetCurrentSolutionSpaceRequest Request;
typedef GetCurrentSolutionSpaceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetCurrentSolutionSpace
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::GetCurrentSolutionSpace > {
  static const char* value()
  {
    return "bacee50609041091b8cb888ffb4bd562";
  }

  static const char* value(const ::dsr_msgs::GetCurrentSolutionSpace&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::GetCurrentSolutionSpace > {
  static const char* value()
  {
    return "dsr_msgs/GetCurrentSolutionSpace";
  }

  static const char* value(const ::dsr_msgs::GetCurrentSolutionSpace&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::GetCurrentSolutionSpaceRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::GetCurrentSolutionSpace >
template<>
struct MD5Sum< ::dsr_msgs::GetCurrentSolutionSpaceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetCurrentSolutionSpace >::value();
  }
  static const char* value(const ::dsr_msgs::GetCurrentSolutionSpaceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetCurrentSolutionSpaceRequest> should match
// service_traits::DataType< ::dsr_msgs::GetCurrentSolutionSpace >
template<>
struct DataType< ::dsr_msgs::GetCurrentSolutionSpaceRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetCurrentSolutionSpace >::value();
  }
  static const char* value(const ::dsr_msgs::GetCurrentSolutionSpaceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::GetCurrentSolutionSpaceResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::GetCurrentSolutionSpace >
template<>
struct MD5Sum< ::dsr_msgs::GetCurrentSolutionSpaceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::GetCurrentSolutionSpace >::value();
  }
  static const char* value(const ::dsr_msgs::GetCurrentSolutionSpaceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::GetCurrentSolutionSpaceResponse> should match
// service_traits::DataType< ::dsr_msgs::GetCurrentSolutionSpace >
template<>
struct DataType< ::dsr_msgs::GetCurrentSolutionSpaceResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::GetCurrentSolutionSpace >::value();
  }
  static const char* value(const ::dsr_msgs::GetCurrentSolutionSpaceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_GETCURRENTSOLUTIONSPACE_H
