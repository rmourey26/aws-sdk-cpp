﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    AWS_EC2_CustomerGateway,
    AWS_EC2_EIP,
    AWS_EC2_Host,
    AWS_EC2_Instance,
    AWS_EC2_InternetGateway,
    AWS_EC2_NetworkAcl,
    AWS_EC2_NetworkInterface,
    AWS_EC2_RouteTable,
    AWS_EC2_SecurityGroup,
    AWS_EC2_Subnet,
    AWS_CloudTrail_Trail,
    AWS_EC2_Volume,
    AWS_EC2_VPC,
    AWS_EC2_VPNConnection,
    AWS_EC2_VPNGateway,
    AWS_EC2_RegisteredHAInstance,
    AWS_EC2_NatGateway,
    AWS_EC2_EgressOnlyInternetGateway,
    AWS_EC2_VPCEndpoint,
    AWS_EC2_VPCEndpointService,
    AWS_EC2_FlowLog,
    AWS_EC2_VPCPeeringConnection,
    AWS_IAM_Group,
    AWS_IAM_Policy,
    AWS_IAM_Role,
    AWS_IAM_User,
    AWS_ElasticLoadBalancingV2_LoadBalancer,
    AWS_ACM_Certificate,
    AWS_RDS_DBInstance,
    AWS_RDS_DBParameterGroup,
    AWS_RDS_DBOptionGroup,
    AWS_RDS_DBSubnetGroup,
    AWS_RDS_DBSecurityGroup,
    AWS_RDS_DBSnapshot,
    AWS_RDS_DBCluster,
    AWS_RDS_DBClusterParameterGroup,
    AWS_RDS_DBClusterSnapshot,
    AWS_RDS_EventSubscription,
    AWS_S3_Bucket,
    AWS_S3_AccountPublicAccessBlock,
    AWS_Redshift_Cluster,
    AWS_Redshift_ClusterSnapshot,
    AWS_Redshift_ClusterParameterGroup,
    AWS_Redshift_ClusterSecurityGroup,
    AWS_Redshift_ClusterSubnetGroup,
    AWS_Redshift_EventSubscription,
    AWS_SSM_ManagedInstanceInventory,
    AWS_CloudWatch_Alarm,
    AWS_CloudFormation_Stack,
    AWS_ElasticLoadBalancing_LoadBalancer,
    AWS_AutoScaling_AutoScalingGroup,
    AWS_AutoScaling_LaunchConfiguration,
    AWS_AutoScaling_ScalingPolicy,
    AWS_AutoScaling_ScheduledAction,
    AWS_DynamoDB_Table,
    AWS_CodeBuild_Project,
    AWS_WAF_RateBasedRule,
    AWS_WAF_Rule,
    AWS_WAF_RuleGroup,
    AWS_WAF_WebACL,
    AWS_WAFRegional_RateBasedRule,
    AWS_WAFRegional_Rule,
    AWS_WAFRegional_RuleGroup,
    AWS_WAFRegional_WebACL,
    AWS_CloudFront_Distribution,
    AWS_CloudFront_StreamingDistribution,
    AWS_Lambda_Alias,
    AWS_Lambda_Function,
    AWS_ElasticBeanstalk_Application,
    AWS_ElasticBeanstalk_ApplicationVersion,
    AWS_ElasticBeanstalk_Environment,
    AWS_MobileHub_Project,
    AWS_XRay_EncryptionConfig,
    AWS_SSM_AssociationCompliance,
    AWS_SSM_PatchCompliance,
    AWS_Shield_Protection,
    AWS_ShieldRegional_Protection,
    AWS_Config_ResourceCompliance,
    AWS_LicenseManager_LicenseConfiguration,
    AWS_ApiGateway_DomainName,
    AWS_ApiGateway_Method,
    AWS_ApiGateway_Stage,
    AWS_ApiGateway_RestApi,
    AWS_ApiGatewayV2_DomainName,
    AWS_ApiGatewayV2_Stage,
    AWS_ApiGatewayV2_Api,
    AWS_CodePipeline_Pipeline,
    AWS_ServiceCatalog_CloudFormationProvisionedProduct,
    AWS_ServiceCatalog_CloudFormationProduct,
    AWS_ServiceCatalog_Portfolio
  };

namespace ResourceTypeMapper
{
AWS_CONFIGSERVICE_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
