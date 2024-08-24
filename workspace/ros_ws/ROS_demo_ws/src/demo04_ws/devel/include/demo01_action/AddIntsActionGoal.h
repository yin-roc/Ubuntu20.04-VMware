// Generated by gencpp from file demo01_action/AddIntsActionGoal.msg
// DO NOT EDIT!


#ifndef DEMO01_ACTION_MESSAGE_ADDINTSACTIONGOAL_H
#define DEMO01_ACTION_MESSAGE_ADDINTSACTIONGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <demo01_action/AddIntsGoal.h>

namespace demo01_action
{
template <class ContainerAllocator>
struct AddIntsActionGoal_
{
  typedef AddIntsActionGoal_<ContainerAllocator> Type;

  AddIntsActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  AddIntsActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::demo01_action::AddIntsGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct AddIntsActionGoal_

typedef ::demo01_action::AddIntsActionGoal_<std::allocator<void> > AddIntsActionGoal;

typedef boost::shared_ptr< ::demo01_action::AddIntsActionGoal > AddIntsActionGoalPtr;
typedef boost::shared_ptr< ::demo01_action::AddIntsActionGoal const> AddIntsActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::demo01_action::AddIntsActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::demo01_action::AddIntsActionGoal_<ContainerAllocator1> & lhs, const ::demo01_action::AddIntsActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::demo01_action::AddIntsActionGoal_<ContainerAllocator1> & lhs, const ::demo01_action::AddIntsActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace demo01_action

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bca6ba8b4ab6c2fa998cc7a334651781";
  }

  static const char* value(const ::demo01_action::AddIntsActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbca6ba8b4ab6c2faULL;
  static const uint64_t static_value2 = 0x998cc7a334651781ULL;
};

template<class ContainerAllocator>
struct DataType< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "demo01_action/AddIntsActionGoal";
  }

  static const char* value(const ::demo01_action::AddIntsActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"AddIntsGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: demo01_action/AddIntsGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# 1.目标数据变量\n"
"int32 num\n"
;
  }

  static const char* value(const ::demo01_action::AddIntsActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddIntsActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::demo01_action::AddIntsActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::demo01_action::AddIntsActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::demo01_action::AddIntsGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEMO01_ACTION_MESSAGE_ADDINTSACTIONGOAL_H