﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/model/HierarchyStructureUpdate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API UpdateUserHierarchyStructureRequest : public ConnectRequest
  {
  public:
    UpdateUserHierarchyStructureRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserHierarchyStructure"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The hierarchy levels to update.</p>
     */
    inline const HierarchyStructureUpdate& GetHierarchyStructure() const{ return m_hierarchyStructure; }

    /**
     * <p>The hierarchy levels to update.</p>
     */
    inline bool HierarchyStructureHasBeenSet() const { return m_hierarchyStructureHasBeenSet; }

    /**
     * <p>The hierarchy levels to update.</p>
     */
    inline void SetHierarchyStructure(const HierarchyStructureUpdate& value) { m_hierarchyStructureHasBeenSet = true; m_hierarchyStructure = value; }

    /**
     * <p>The hierarchy levels to update.</p>
     */
    inline void SetHierarchyStructure(HierarchyStructureUpdate&& value) { m_hierarchyStructureHasBeenSet = true; m_hierarchyStructure = std::move(value); }

    /**
     * <p>The hierarchy levels to update.</p>
     */
    inline UpdateUserHierarchyStructureRequest& WithHierarchyStructure(const HierarchyStructureUpdate& value) { SetHierarchyStructure(value); return *this;}

    /**
     * <p>The hierarchy levels to update.</p>
     */
    inline UpdateUserHierarchyStructureRequest& WithHierarchyStructure(HierarchyStructureUpdate&& value) { SetHierarchyStructure(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateUserHierarchyStructureRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateUserHierarchyStructureRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateUserHierarchyStructureRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    HierarchyStructureUpdate m_hierarchyStructure;
    bool m_hierarchyStructureHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
