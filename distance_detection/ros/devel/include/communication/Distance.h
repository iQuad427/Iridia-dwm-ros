// Generated by gencpp from file communication/Distance.msg
// DO NOT EDIT!


#ifndef COMMUNICATION_MESSAGE_DISTANCE_H
#define COMMUNICATION_MESSAGE_DISTANCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace communication
{
template <class ContainerAllocator>
struct Distance_
{
  typedef Distance_<ContainerAllocator> Type;

  Distance_()
    : robot_id(0)
    , distance(0.0)
    , color()  {
    }
  Distance_(const ContainerAllocator& _alloc)
    : robot_id(0)
    , distance(0.0)
    , color(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _robot_id_type;
  _robot_id_type robot_id;

   typedef float _distance_type;
  _distance_type distance;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _color_type;
  _color_type color;





  typedef boost::shared_ptr< ::communication::Distance_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::communication::Distance_<ContainerAllocator> const> ConstPtr;

}; // struct Distance_

typedef ::communication::Distance_<std::allocator<void> > Distance;

typedef boost::shared_ptr< ::communication::Distance > DistancePtr;
typedef boost::shared_ptr< ::communication::Distance const> DistanceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::communication::Distance_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::communication::Distance_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::communication::Distance_<ContainerAllocator1> & lhs, const ::communication::Distance_<ContainerAllocator2> & rhs)
{
  return lhs.robot_id == rhs.robot_id &&
    lhs.distance == rhs.distance &&
    lhs.color == rhs.color;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::communication::Distance_<ContainerAllocator1> & lhs, const ::communication::Distance_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace communication

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::communication::Distance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::communication::Distance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::communication::Distance_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::communication::Distance_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::communication::Distance_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::communication::Distance_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::communication::Distance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cd8303e074167b796d0380292be4fd56";
  }

  static const char* value(const ::communication::Distance_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcd8303e074167b79ULL;
  static const uint64_t static_value2 = 0x6d0380292be4fd56ULL;
};

template<class ContainerAllocator>
struct DataType< ::communication::Distance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "communication/Distance";
  }

  static const char* value(const ::communication::Distance_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::communication::Distance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 robot_id\n"
"float32 distance\n"
"string color\n"
;
  }

  static const char* value(const ::communication::Distance_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::communication::Distance_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.robot_id);
      stream.next(m.distance);
      stream.next(m.color);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Distance_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::communication::Distance_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::communication::Distance_<ContainerAllocator>& v)
  {
    s << indent << "robot_id: ";
    Printer<int16_t>::stream(s, indent + "  ", v.robot_id);
    s << indent << "distance: ";
    Printer<float>::stream(s, indent + "  ", v.distance);
    s << indent << "color: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.color);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMMUNICATION_MESSAGE_DISTANCE_H
