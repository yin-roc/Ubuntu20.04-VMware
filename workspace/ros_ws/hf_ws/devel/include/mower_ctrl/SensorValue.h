// Generated by gencpp from file mower_ctrl/SensorValue.msg
// DO NOT EDIT!


#ifndef MOWER_CTRL_MESSAGE_SENSORVALUE_H
#define MOWER_CTRL_MESSAGE_SENSORVALUE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mower_ctrl
{
template <class ContainerAllocator>
struct SensorValue_
{
  typedef SensorValue_<ContainerAllocator> Type;

  SensorValue_()
    : col_data1(0)
    , col_data2(0)
    , col_data3(0)
    , col_data4(0)
    , ul_data1(0)
    , ul_data2(0)
    , ul_data3(0)
    , ul_data4(0)
    , distance(0)
    , carpipe(0)
    , rollpipe(0)
    , nowcar_speed(0.0)  {
    }
  SensorValue_(const ContainerAllocator& _alloc)
    : col_data1(0)
    , col_data2(0)
    , col_data3(0)
    , col_data4(0)
    , ul_data1(0)
    , ul_data2(0)
    , ul_data3(0)
    , ul_data4(0)
    , distance(0)
    , carpipe(0)
    , rollpipe(0)
    , nowcar_speed(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _col_data1_type;
  _col_data1_type col_data1;

   typedef uint8_t _col_data2_type;
  _col_data2_type col_data2;

   typedef uint8_t _col_data3_type;
  _col_data3_type col_data3;

   typedef uint8_t _col_data4_type;
  _col_data4_type col_data4;

   typedef uint16_t _ul_data1_type;
  _ul_data1_type ul_data1;

   typedef uint16_t _ul_data2_type;
  _ul_data2_type ul_data2;

   typedef uint16_t _ul_data3_type;
  _ul_data3_type ul_data3;

   typedef uint16_t _ul_data4_type;
  _ul_data4_type ul_data4;

   typedef uint32_t _distance_type;
  _distance_type distance;

   typedef uint8_t _carpipe_type;
  _carpipe_type carpipe;

   typedef uint8_t _rollpipe_type;
  _rollpipe_type rollpipe;

   typedef float _nowcar_speed_type;
  _nowcar_speed_type nowcar_speed;





  typedef boost::shared_ptr< ::mower_ctrl::SensorValue_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mower_ctrl::SensorValue_<ContainerAllocator> const> ConstPtr;

}; // struct SensorValue_

typedef ::mower_ctrl::SensorValue_<std::allocator<void> > SensorValue;

typedef boost::shared_ptr< ::mower_ctrl::SensorValue > SensorValuePtr;
typedef boost::shared_ptr< ::mower_ctrl::SensorValue const> SensorValueConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mower_ctrl::SensorValue_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mower_ctrl::SensorValue_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mower_ctrl::SensorValue_<ContainerAllocator1> & lhs, const ::mower_ctrl::SensorValue_<ContainerAllocator2> & rhs)
{
  return lhs.col_data1 == rhs.col_data1 &&
    lhs.col_data2 == rhs.col_data2 &&
    lhs.col_data3 == rhs.col_data3 &&
    lhs.col_data4 == rhs.col_data4 &&
    lhs.ul_data1 == rhs.ul_data1 &&
    lhs.ul_data2 == rhs.ul_data2 &&
    lhs.ul_data3 == rhs.ul_data3 &&
    lhs.ul_data4 == rhs.ul_data4 &&
    lhs.distance == rhs.distance &&
    lhs.carpipe == rhs.carpipe &&
    lhs.rollpipe == rhs.rollpipe &&
    lhs.nowcar_speed == rhs.nowcar_speed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mower_ctrl::SensorValue_<ContainerAllocator1> & lhs, const ::mower_ctrl::SensorValue_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mower_ctrl

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mower_ctrl::SensorValue_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mower_ctrl::SensorValue_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mower_ctrl::SensorValue_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mower_ctrl::SensorValue_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mower_ctrl::SensorValue_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mower_ctrl::SensorValue_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mower_ctrl::SensorValue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6b1c1b5327ee628950d965f31630e649";
  }

  static const char* value(const ::mower_ctrl::SensorValue_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6b1c1b5327ee6289ULL;
  static const uint64_t static_value2 = 0x50d965f31630e649ULL;
};

template<class ContainerAllocator>
struct DataType< ::mower_ctrl::SensorValue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mower_ctrl/SensorValue";
  }

  static const char* value(const ::mower_ctrl::SensorValue_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mower_ctrl::SensorValue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 col_data1\n"
"uint8 col_data2\n"
"uint8 col_data3\n"
"uint8 col_data4\n"
"uint16 ul_data1\n"
"uint16 ul_data2\n"
"uint16 ul_data3\n"
"uint16 ul_data4\n"
"uint32 distance\n"
"uint8 carpipe\n"
"uint8 rollpipe\n"
"float32 nowcar_speed\n"
;
  }

  static const char* value(const ::mower_ctrl::SensorValue_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mower_ctrl::SensorValue_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.col_data1);
      stream.next(m.col_data2);
      stream.next(m.col_data3);
      stream.next(m.col_data4);
      stream.next(m.ul_data1);
      stream.next(m.ul_data2);
      stream.next(m.ul_data3);
      stream.next(m.ul_data4);
      stream.next(m.distance);
      stream.next(m.carpipe);
      stream.next(m.rollpipe);
      stream.next(m.nowcar_speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SensorValue_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mower_ctrl::SensorValue_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mower_ctrl::SensorValue_<ContainerAllocator>& v)
  {
    s << indent << "col_data1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.col_data1);
    s << indent << "col_data2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.col_data2);
    s << indent << "col_data3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.col_data3);
    s << indent << "col_data4: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.col_data4);
    s << indent << "ul_data1: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ul_data1);
    s << indent << "ul_data2: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ul_data2);
    s << indent << "ul_data3: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ul_data3);
    s << indent << "ul_data4: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ul_data4);
    s << indent << "distance: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.distance);
    s << indent << "carpipe: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.carpipe);
    s << indent << "rollpipe: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rollpipe);
    s << indent << "nowcar_speed: ";
    Printer<float>::stream(s, indent + "  ", v.nowcar_speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOWER_CTRL_MESSAGE_SENSORVALUE_H
