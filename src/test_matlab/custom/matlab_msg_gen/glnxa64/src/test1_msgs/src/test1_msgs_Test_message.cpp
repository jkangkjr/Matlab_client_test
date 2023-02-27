// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for test1_msgs/Test
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "test1_msgs/msg/test.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class TEST1_MSGS_EXPORT ros2_test1_msgs_msg_Test_common : public MATLABROS2MsgInterface<test1_msgs::msg::Test> {
  public:
    virtual ~ros2_test1_msgs_msg_Test_common(){}
    virtual void copy_from_struct(test1_msgs::msg::Test* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const test1_msgs::msg::Test* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_test1_msgs_msg_Test_common::copy_from_struct(test1_msgs::msg::Test* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //num
        const matlab::data::TypedArray<double> num_arr = arr["num"];
        msg->num = num_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'num' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'num' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_test1_msgs_msg_Test_common::get_arr(MDFactory_T& factory, const test1_msgs::msg::Test* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","num"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("test1_msgs/Test");
    // num
    auto currentElement_num = (msg + ctr)->num;
    outArray[ctr]["num"] = factory.createScalar(currentElement_num);
    }
    return std::move(outArray);
  } 
class TEST1_MSGS_EXPORT ros2_test1_msgs_Test_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_test1_msgs_Test_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_test1_msgs_Test_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<test1_msgs::msg::Test,ros2_test1_msgs_msg_Test_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_test1_msgs_Test_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<test1_msgs::msg::Test,ros2_test1_msgs_msg_Test_common>>();
  }
  std::shared_ptr<void> ros2_test1_msgs_Test_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<test1_msgs::msg::Test>();
    ros2_test1_msgs_msg_Test_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_test1_msgs_Test_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_test1_msgs_msg_Test_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (test1_msgs::msg::Test*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_test1_msgs_msg_Test_common, MATLABROS2MsgInterface<test1_msgs::msg::Test>)
CLASS_LOADER_REGISTER_CLASS(ros2_test1_msgs_Test_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER