﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector-specific profile properties required when using Salesforce.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SalesforceConnectorProfileProperties">AWS
   * API Reference</a></p>
   */
  class AWS_APPFLOW_API SalesforceConnectorProfileProperties
  {
  public:
    SalesforceConnectorProfileProperties();
    SalesforceConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    SalesforceConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline const Aws::String& GetInstanceUrl() const{ return m_instanceUrl; }

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline bool InstanceUrlHasBeenSet() const { return m_instanceUrlHasBeenSet; }

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline void SetInstanceUrl(const Aws::String& value) { m_instanceUrlHasBeenSet = true; m_instanceUrl = value; }

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline void SetInstanceUrl(Aws::String&& value) { m_instanceUrlHasBeenSet = true; m_instanceUrl = std::move(value); }

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline void SetInstanceUrl(const char* value) { m_instanceUrlHasBeenSet = true; m_instanceUrl.assign(value); }

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline SalesforceConnectorProfileProperties& WithInstanceUrl(const Aws::String& value) { SetInstanceUrl(value); return *this;}

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline SalesforceConnectorProfileProperties& WithInstanceUrl(Aws::String&& value) { SetInstanceUrl(std::move(value)); return *this;}

    /**
     * <p> The location of the Salesforce resource. </p>
     */
    inline SalesforceConnectorProfileProperties& WithInstanceUrl(const char* value) { SetInstanceUrl(value); return *this;}


    /**
     * <p> Indicates whether the connector profile applies to a sandbox or production
     * environment. </p>
     */
    inline bool GetIsSandboxEnvironment() const{ return m_isSandboxEnvironment; }

    /**
     * <p> Indicates whether the connector profile applies to a sandbox or production
     * environment. </p>
     */
    inline bool IsSandboxEnvironmentHasBeenSet() const { return m_isSandboxEnvironmentHasBeenSet; }

    /**
     * <p> Indicates whether the connector profile applies to a sandbox or production
     * environment. </p>
     */
    inline void SetIsSandboxEnvironment(bool value) { m_isSandboxEnvironmentHasBeenSet = true; m_isSandboxEnvironment = value; }

    /**
     * <p> Indicates whether the connector profile applies to a sandbox or production
     * environment. </p>
     */
    inline SalesforceConnectorProfileProperties& WithIsSandboxEnvironment(bool value) { SetIsSandboxEnvironment(value); return *this;}

  private:

    Aws::String m_instanceUrl;
    bool m_instanceUrlHasBeenSet = false;

    bool m_isSandboxEnvironment;
    bool m_isSandboxEnvironmentHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
