// Generated by gencpp from file dsr_msgs/Trans.msg
// DO NOT EDIT!


#ifndef DSR_MSGS_MESSAGE_TRANS_H
#define DSR_MSGS_MESSAGE_TRANS_H

#include <ros/service_traits.h>


#include <dsr_msgs/TransRequest.h>
#include <dsr_msgs/TransResponse.h>


namespace dsr_msgs
{

struct Trans
{

typedef TransRequest Request;
typedef TransResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Trans
} // namespace dsr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dsr_msgs::Trans > {
  static const char* value()
  {
    return "2cc8472f65a9eb8b986e1489e30025bf";
  }

  static const char* value(const ::dsr_msgs::Trans&) { return value(); }
};

template<>
struct DataType< ::dsr_msgs::Trans > {
  static const char* value()
  {
    return "dsr_msgs/Trans";
  }

  static const char* value(const ::dsr_msgs::Trans&) { return value(); }
};


// service_traits::MD5Sum< ::dsr_msgs::TransRequest> should match
// service_traits::MD5Sum< ::dsr_msgs::Trans >
template<>
struct MD5Sum< ::dsr_msgs::TransRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::Trans >::value();
  }
  static const char* value(const ::dsr_msgs::TransRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::TransRequest> should match
// service_traits::DataType< ::dsr_msgs::Trans >
template<>
struct DataType< ::dsr_msgs::TransRequest>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::Trans >::value();
  }
  static const char* value(const ::dsr_msgs::TransRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dsr_msgs::TransResponse> should match
// service_traits::MD5Sum< ::dsr_msgs::Trans >
template<>
struct MD5Sum< ::dsr_msgs::TransResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dsr_msgs::Trans >::value();
  }
  static const char* value(const ::dsr_msgs::TransResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dsr_msgs::TransResponse> should match
// service_traits::DataType< ::dsr_msgs::Trans >
template<>
struct DataType< ::dsr_msgs::TransResponse>
{
  static const char* value()
  {
    return DataType< ::dsr_msgs::Trans >::value();
  }
  static const char* value(const ::dsr_msgs::TransResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DSR_MSGS_MESSAGE_TRANS_H