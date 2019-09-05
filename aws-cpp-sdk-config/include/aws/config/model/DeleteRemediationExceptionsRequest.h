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
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/RemediationExceptionResourceKey.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class AWS_CONFIGSERVICE_API DeleteRemediationExceptionsRequest : public ConfigServiceRequest
  {
  public:
    DeleteRemediationExceptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRemediationExceptions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the AWS Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the AWS Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name of the AWS Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the AWS Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of the AWS Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the AWS Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline DeleteRemediationExceptionsRequest& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the AWS Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline DeleteRemediationExceptionsRequest& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Config rule for which you want to delete remediation
     * exception configuration.</p>
     */
    inline DeleteRemediationExceptionsRequest& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. AWS Config adds exception for each resource key. For example, AWS
     * Config adds 3 exceptions for 3 resource keys. </p>
     */
    inline const Aws::Vector<RemediationExceptionResourceKey>& GetResourceKeys() const{ return m_resourceKeys; }

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. AWS Config adds exception for each resource key. For example, AWS
     * Config adds 3 exceptions for 3 resource keys. </p>
     */
    inline bool ResourceKeysHasBeenSet() const { return m_resourceKeysHasBeenSet; }

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. AWS Config adds exception for each resource key. For example, AWS
     * Config adds 3 exceptions for 3 resource keys. </p>
     */
    inline void SetResourceKeys(const Aws::Vector<RemediationExceptionResourceKey>& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys = value; }

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. AWS Config adds exception for each resource key. For example, AWS
     * Config adds 3 exceptions for 3 resource keys. </p>
     */
    inline void SetResourceKeys(Aws::Vector<RemediationExceptionResourceKey>&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys = std::move(value); }

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. AWS Config adds exception for each resource key. For example, AWS
     * Config adds 3 exceptions for 3 resource keys. </p>
     */
    inline DeleteRemediationExceptionsRequest& WithResourceKeys(const Aws::Vector<RemediationExceptionResourceKey>& value) { SetResourceKeys(value); return *this;}

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. AWS Config adds exception for each resource key. For example, AWS
     * Config adds 3 exceptions for 3 resource keys. </p>
     */
    inline DeleteRemediationExceptionsRequest& WithResourceKeys(Aws::Vector<RemediationExceptionResourceKey>&& value) { SetResourceKeys(std::move(value)); return *this;}

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. AWS Config adds exception for each resource key. For example, AWS
     * Config adds 3 exceptions for 3 resource keys. </p>
     */
    inline DeleteRemediationExceptionsRequest& AddResourceKeys(const RemediationExceptionResourceKey& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(value); return *this; }

    /**
     * <p>An exception list of resource exception keys to be processed with the current
     * request. AWS Config adds exception for each resource key. For example, AWS
     * Config adds 3 exceptions for 3 resource keys. </p>
     */
    inline DeleteRemediationExceptionsRequest& AddResourceKeys(RemediationExceptionResourceKey&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet;

    Aws::Vector<RemediationExceptionResourceKey> m_resourceKeys;
    bool m_resourceKeysHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
