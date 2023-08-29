// Generated by gencpp from file dsr_msgs/JogMulti.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_JOGMULTI_H
#define DSR_MSGS_MESSAGE_JOGMULTI_H

#include <ros/service_traits.h>


#include <dsr_msgs/JogMultiRequest.h>
#include <dsr_msgs/JogMultiResponse.h>


namespace dsr_msgs
{

struct JogMulti
{

typedef JogMultiRequest Request;
typedef JogMultiResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct JogMulti
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::JogMulti > {
  static const char* value()
  {
    return "fc4c9a5dbff2b2bad258eb5f8e8ba682";
  }

  static const char* value(const ::dsr_msgs::JogMulti&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::JogMulti > {
  static const char* value()
  {
    return "dsr_msgs/JogMulti";
  }

  static const char* value(const ::dsr_msgs::JogMulti&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::JogMultiRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::JogMulti >
template<>
struct MD5Sum< ::dsr_msgs::JogMultiRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::JogMulti >::value();
  }
  static const char* value(const ::dsr_msgs::JogMultiRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::JogMultiRequest> should match
// service_traits::DataType< ::dsr_msgs::JogMulti >
template<>
struct DataType< ::dsr_msgs::JogMultiRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::JogMulti >::value();
  }
  static const char* value(const ::dsr_msgs::JogMultiRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::JogMultiResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::JogMulti >
template<>
struct MD5Sum< ::dsr_msgs::JogMultiResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::JogMulti >::value();
  }
  static const char* value(const ::dsr_msgs::JogMultiResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::JogMultiResponse> should match
// service_traits::DataType< ::dsr_msgs::JogMulti >
template<>
struct DataType< ::dsr_msgs::JogMultiResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::JogMulti >::value();
  }
  static const char* value(const ::dsr_msgs::JogMultiResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_JOGMULTI_H