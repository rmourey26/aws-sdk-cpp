﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/AutoScalingGroup.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of an <code>UpdateDeploymentGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateDeploymentGroupOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API UpdateDeploymentGroupResult
  {
  public:
    UpdateDeploymentGroupResult();
    UpdateDeploymentGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDeploymentGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the output contains no data, and the corresponding deployment group
     * contained at least one Auto Scaling group, CodeDeploy successfully removed all
     * corresponding Auto Scaling lifecycle event hooks from the Amazon Web Services
     * account. If the output contains data, CodeDeploy could not remove some Auto
     * Scaling lifecycle event hooks from the Amazon Web Services account.</p>
     */
    inline const Aws::Vector<AutoScalingGroup>& GetHooksNotCleanedUp() const{ return m_hooksNotCleanedUp; }

    /**
     * <p>If the output contains no data, and the corresponding deployment group
     * contained at least one Auto Scaling group, CodeDeploy successfully removed all
     * corresponding Auto Scaling lifecycle event hooks from the Amazon Web Services
     * account. If the output contains data, CodeDeploy could not remove some Auto
     * Scaling lifecycle event hooks from the Amazon Web Services account.</p>
     */
    inline void SetHooksNotCleanedUp(const Aws::Vector<AutoScalingGroup>& value) { m_hooksNotCleanedUp = value; }

    /**
     * <p>If the output contains no data, and the corresponding deployment group
     * contained at least one Auto Scaling group, CodeDeploy successfully removed all
     * corresponding Auto Scaling lifecycle event hooks from the Amazon Web Services
     * account. If the output contains data, CodeDeploy could not remove some Auto
     * Scaling lifecycle event hooks from the Amazon Web Services account.</p>
     */
    inline void SetHooksNotCleanedUp(Aws::Vector<AutoScalingGroup>&& value) { m_hooksNotCleanedUp = std::move(value); }

    /**
     * <p>If the output contains no data, and the corresponding deployment group
     * contained at least one Auto Scaling group, CodeDeploy successfully removed all
     * corresponding Auto Scaling lifecycle event hooks from the Amazon Web Services
     * account. If the output contains data, CodeDeploy could not remove some Auto
     * Scaling lifecycle event hooks from the Amazon Web Services account.</p>
     */
    inline UpdateDeploymentGroupResult& WithHooksNotCleanedUp(const Aws::Vector<AutoScalingGroup>& value) { SetHooksNotCleanedUp(value); return *this;}

    /**
     * <p>If the output contains no data, and the corresponding deployment group
     * contained at least one Auto Scaling group, CodeDeploy successfully removed all
     * corresponding Auto Scaling lifecycle event hooks from the Amazon Web Services
     * account. If the output contains data, CodeDeploy could not remove some Auto
     * Scaling lifecycle event hooks from the Amazon Web Services account.</p>
     */
    inline UpdateDeploymentGroupResult& WithHooksNotCleanedUp(Aws::Vector<AutoScalingGroup>&& value) { SetHooksNotCleanedUp(std::move(value)); return *this;}

    /**
     * <p>If the output contains no data, and the corresponding deployment group
     * contained at least one Auto Scaling group, CodeDeploy successfully removed all
     * corresponding Auto Scaling lifecycle event hooks from the Amazon Web Services
     * account. If the output contains data, CodeDeploy could not remove some Auto
     * Scaling lifecycle event hooks from the Amazon Web Services account.</p>
     */
    inline UpdateDeploymentGroupResult& AddHooksNotCleanedUp(const AutoScalingGroup& value) { m_hooksNotCleanedUp.push_back(value); return *this; }

    /**
     * <p>If the output contains no data, and the corresponding deployment group
     * contained at least one Auto Scaling group, CodeDeploy successfully removed all
     * corresponding Auto Scaling lifecycle event hooks from the Amazon Web Services
     * account. If the output contains data, CodeDeploy could not remove some Auto
     * Scaling lifecycle event hooks from the Amazon Web Services account.</p>
     */
    inline UpdateDeploymentGroupResult& AddHooksNotCleanedUp(AutoScalingGroup&& value) { m_hooksNotCleanedUp.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AutoScalingGroup> m_hooksNotCleanedUp;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
