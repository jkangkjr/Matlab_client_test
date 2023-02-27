// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for test1_msgs/FindNormRequest
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
#include "test1_msgs/srv/find_norm.hpp"
#include "visibility_control.h"
#ifndef FOUNDATION_MATLABDATA_API
#include "MDArray.hpp"
#include "StructArray.hpp"
#include "TypedArrayRef.hpp"
#include "Struct.hpp"
#include "ArrayFactory.hpp"
#include "StructRef.hpp"
#include "Reference.hpp"
#endif
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
#include "ROS2ServiceTemplates.hpp"
class TEST1_MSGS_EXPORT ros2_test1_msgs_msg_FindNormRequest_common : public MATLABROS2MsgInterface<test1_msgs::srv::FindNorm::Request> {
  public:
    virtual ~ros2_test1_msgs_msg_FindNormRequest_common(){}
    virtual void copy_from_struct(test1_msgs::srv::FindNorm::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const test1_msgs::srv::FindNorm::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_test1_msgs_msg_FindNormRequest_common::copy_from_struct(test1_msgs::srv::FindNorm::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //input
        const matlab::data::StructArray input_arr = arr["input"];
        auto msgClassPtr_input = getCommonObject<test1_msgs::msg::Test>("ros2_test1_msgs_msg_Test_common",loader);
        msgClassPtr_input->copy_from_struct(&msg->input,input_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'input' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'input' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_test1_msgs_msg_FindNormRequest_common::get_arr(MDFactory_T& factory, const test1_msgs::srv::FindNorm::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","input"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("test1_msgs/FindNormRequest");
    // input
    auto currentElement_input = (msg + ctr)->input;
    auto msgClassPtr_input = getCommonObject<test1_msgs::msg::Test>("ros2_test1_msgs_msg_Test_common",loader);
    outArray[ctr]["input"] = msgClassPtr_input->get_arr(factory, &currentElement_input, loader);
    }
    return std::move(outArray);
  }
class TEST1_MSGS_EXPORT ros2_test1_msgs_msg_FindNormResponse_common : public MATLABROS2MsgInterface<test1_msgs::srv::FindNorm::Response> {
  public:
    virtual ~ros2_test1_msgs_msg_FindNormResponse_common(){}
    virtual void copy_from_struct(test1_msgs::srv::FindNorm::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const test1_msgs::srv::FindNorm::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_test1_msgs_msg_FindNormResponse_common::copy_from_struct(test1_msgs::srv::FindNorm::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //norm
        const matlab::data::StructArray norm_arr = arr["norm"];
        auto msgClassPtr_norm = getCommonObject<test1_msgs::msg::Test>("ros2_test1_msgs_msg_Test_common",loader);
        msgClassPtr_norm->copy_from_struct(&msg->norm,norm_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'norm' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'norm' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_test1_msgs_msg_FindNormResponse_common::get_arr(MDFactory_T& factory, const test1_msgs::srv::FindNorm::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","norm"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("test1_msgs/FindNormResponse");
    // norm
    auto currentElement_norm = (msg + ctr)->norm;
    auto msgClassPtr_norm = getCommonObject<test1_msgs::msg::Test>("ros2_test1_msgs_msg_Test_common",loader);
    outArray[ctr]["norm"] = msgClassPtr_norm->get_arr(factory, &currentElement_norm, loader);
    }
    return std::move(outArray);
  } 
class TEST1_MSGS_EXPORT ros2_test1_msgs_FindNorm_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_test1_msgs_FindNorm_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_test1_msgs_FindNorm_service::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROS2PublisherImpl<test1_msgs::srv::FindNorm::Request,ros2_test1_msgs_msg_FindNormRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROS2PublisherImpl<test1_msgs::srv::FindNorm::Response,ros2_test1_msgs_msg_FindNormResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_test1_msgs_FindNorm_service::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eRequest){
        ptr = std::make_shared<ROS2SubscriberImpl<test1_msgs::srv::FindNorm::Request,ros2_test1_msgs_msg_FindNormRequest_common>>();
    }else if(type == eResponse){
        ptr = std::make_shared<ROS2SubscriberImpl<test1_msgs::srv::FindNorm::Response,ros2_test1_msgs_msg_FindNormResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    return ptr;
  }
  std::shared_ptr<void> ros2_test1_msgs_FindNorm_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<test1_msgs::srv::FindNorm::Request>();
        ros2_test1_msgs_msg_FindNormRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<test1_msgs::srv::FindNorm::Response>();
        ros2_test1_msgs_msg_FindNormResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
    std::shared_ptr<void> msg;
    return msg;
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_test1_msgs_FindNorm_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<test1_msgs::srv::FindNorm,test1_msgs::srv::FindNorm::Request,test1_msgs::srv::FindNorm::Response,ros2_test1_msgs_msg_FindNormRequest_common,ros2_test1_msgs_msg_FindNormResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_test1_msgs_FindNorm_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<test1_msgs::srv::FindNorm,test1_msgs::srv::FindNorm::Request,test1_msgs::srv::FindNorm::Response,ros2_test1_msgs_msg_FindNormRequest_common,ros2_test1_msgs_msg_FindNormResponse_common,rclcpp::Client<test1_msgs::srv::FindNorm>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_test1_msgs_FindNorm_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_test1_msgs_msg_FindNormRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (test1_msgs::srv::FindNorm::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_test1_msgs_msg_FindNormResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (test1_msgs::srv::FindNorm::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_test1_msgs_msg_FindNormRequest_common, MATLABROS2MsgInterface<test1_msgs::srv::FindNorm::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_test1_msgs_msg_FindNormResponse_common, MATLABROS2MsgInterface<test1_msgs::srv::FindNorm::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_test1_msgs_FindNorm_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
