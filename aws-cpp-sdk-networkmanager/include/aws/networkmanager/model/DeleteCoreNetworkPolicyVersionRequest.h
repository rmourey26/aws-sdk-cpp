﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class AWS_NETWORKMANAGER_API DeleteCoreNetworkPolicyVersionRequest : public NetworkManagerRequest
  {
  public:
    DeleteCoreNetworkPolicyVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCoreNetworkPolicyVersion"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of a core network for the deleted policy.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network for the deleted policy.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network for the deleted policy.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network for the deleted policy.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network for the deleted policy.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network for the deleted policy.</p>
     */
    inline DeleteCoreNetworkPolicyVersionRequest& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network for the deleted policy.</p>
     */
    inline DeleteCoreNetworkPolicyVersionRequest& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network for the deleted policy.</p>
     */
    inline DeleteCoreNetworkPolicyVersionRequest& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The version ID of the deleted policy.</p>
     */
    inline int GetPolicyVersionId() const{ return m_policyVersionId; }

    /**
     * <p>The version ID of the deleted policy.</p>
     */
    inline bool PolicyVersionIdHasBeenSet() const { return m_policyVersionIdHasBeenSet; }

    /**
     * <p>The version ID of the deleted policy.</p>
     */
    inline void SetPolicyVersionId(int value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId = value; }

    /**
     * <p>The version ID of the deleted policy.</p>
     */
    inline DeleteCoreNetworkPolicyVersionRequest& WithPolicyVersionId(int value) { SetPolicyVersionId(value); return *this;}

  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    int m_policyVersionId;
    bool m_policyVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
