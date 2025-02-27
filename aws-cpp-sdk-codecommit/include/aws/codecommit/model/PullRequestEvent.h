﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codecommit/model/PullRequestEventType.h>
#include <aws/codecommit/model/PullRequestCreatedEventMetadata.h>
#include <aws/codecommit/model/PullRequestStatusChangedEventMetadata.h>
#include <aws/codecommit/model/PullRequestSourceReferenceUpdatedEventMetadata.h>
#include <aws/codecommit/model/PullRequestMergedStateChangedEventMetadata.h>
#include <aws/codecommit/model/ApprovalRuleEventMetadata.h>
#include <aws/codecommit/model/ApprovalStateChangedEventMetadata.h>
#include <aws/codecommit/model/ApprovalRuleOverriddenEventMetadata.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about a pull request event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PullRequestEvent">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API PullRequestEvent
  {
  public:
    PullRequestEvent();
    PullRequestEvent(Aws::Utils::Json::JsonView jsonValue);
    PullRequestEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline PullRequestEvent& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline PullRequestEvent& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline PullRequestEvent& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}


    /**
     * <p>The day and time of the pull request event, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetEventDate() const{ return m_eventDate; }

    /**
     * <p>The day and time of the pull request event, in timestamp format.</p>
     */
    inline bool EventDateHasBeenSet() const { return m_eventDateHasBeenSet; }

    /**
     * <p>The day and time of the pull request event, in timestamp format.</p>
     */
    inline void SetEventDate(const Aws::Utils::DateTime& value) { m_eventDateHasBeenSet = true; m_eventDate = value; }

    /**
     * <p>The day and time of the pull request event, in timestamp format.</p>
     */
    inline void SetEventDate(Aws::Utils::DateTime&& value) { m_eventDateHasBeenSet = true; m_eventDate = std::move(value); }

    /**
     * <p>The day and time of the pull request event, in timestamp format.</p>
     */
    inline PullRequestEvent& WithEventDate(const Aws::Utils::DateTime& value) { SetEventDate(value); return *this;}

    /**
     * <p>The day and time of the pull request event, in timestamp format.</p>
     */
    inline PullRequestEvent& WithEventDate(Aws::Utils::DateTime&& value) { SetEventDate(std::move(value)); return *this;}


    /**
     * <p>The type of the pull request event (for example, a status change event
     * (PULL_REQUEST_STATUS_CHANGED) or update event
     * (PULL_REQUEST_SOURCE_REFERENCE_UPDATED)).</p>
     */
    inline const PullRequestEventType& GetPullRequestEventType() const{ return m_pullRequestEventType; }

    /**
     * <p>The type of the pull request event (for example, a status change event
     * (PULL_REQUEST_STATUS_CHANGED) or update event
     * (PULL_REQUEST_SOURCE_REFERENCE_UPDATED)).</p>
     */
    inline bool PullRequestEventTypeHasBeenSet() const { return m_pullRequestEventTypeHasBeenSet; }

    /**
     * <p>The type of the pull request event (for example, a status change event
     * (PULL_REQUEST_STATUS_CHANGED) or update event
     * (PULL_REQUEST_SOURCE_REFERENCE_UPDATED)).</p>
     */
    inline void SetPullRequestEventType(const PullRequestEventType& value) { m_pullRequestEventTypeHasBeenSet = true; m_pullRequestEventType = value; }

    /**
     * <p>The type of the pull request event (for example, a status change event
     * (PULL_REQUEST_STATUS_CHANGED) or update event
     * (PULL_REQUEST_SOURCE_REFERENCE_UPDATED)).</p>
     */
    inline void SetPullRequestEventType(PullRequestEventType&& value) { m_pullRequestEventTypeHasBeenSet = true; m_pullRequestEventType = std::move(value); }

    /**
     * <p>The type of the pull request event (for example, a status change event
     * (PULL_REQUEST_STATUS_CHANGED) or update event
     * (PULL_REQUEST_SOURCE_REFERENCE_UPDATED)).</p>
     */
    inline PullRequestEvent& WithPullRequestEventType(const PullRequestEventType& value) { SetPullRequestEventType(value); return *this;}

    /**
     * <p>The type of the pull request event (for example, a status change event
     * (PULL_REQUEST_STATUS_CHANGED) or update event
     * (PULL_REQUEST_SOURCE_REFERENCE_UPDATED)).</p>
     */
    inline PullRequestEvent& WithPullRequestEventType(PullRequestEventType&& value) { SetPullRequestEventType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with more commits or changing
     * the status of a pull request.</p>
     */
    inline const Aws::String& GetActorArn() const{ return m_actorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with more commits or changing
     * the status of a pull request.</p>
     */
    inline bool ActorArnHasBeenSet() const { return m_actorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with more commits or changing
     * the status of a pull request.</p>
     */
    inline void SetActorArn(const Aws::String& value) { m_actorArnHasBeenSet = true; m_actorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with more commits or changing
     * the status of a pull request.</p>
     */
    inline void SetActorArn(Aws::String&& value) { m_actorArnHasBeenSet = true; m_actorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with more commits or changing
     * the status of a pull request.</p>
     */
    inline void SetActorArn(const char* value) { m_actorArnHasBeenSet = true; m_actorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with more commits or changing
     * the status of a pull request.</p>
     */
    inline PullRequestEvent& WithActorArn(const Aws::String& value) { SetActorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with more commits or changing
     * the status of a pull request.</p>
     */
    inline PullRequestEvent& WithActorArn(Aws::String&& value) { SetActorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with more commits or changing
     * the status of a pull request.</p>
     */
    inline PullRequestEvent& WithActorArn(const char* value) { SetActorArn(value); return *this;}


    /**
     * <p>Information about the source and destination branches for the pull
     * request.</p>
     */
    inline const PullRequestCreatedEventMetadata& GetPullRequestCreatedEventMetadata() const{ return m_pullRequestCreatedEventMetadata; }

    /**
     * <p>Information about the source and destination branches for the pull
     * request.</p>
     */
    inline bool PullRequestCreatedEventMetadataHasBeenSet() const { return m_pullRequestCreatedEventMetadataHasBeenSet; }

    /**
     * <p>Information about the source and destination branches for the pull
     * request.</p>
     */
    inline void SetPullRequestCreatedEventMetadata(const PullRequestCreatedEventMetadata& value) { m_pullRequestCreatedEventMetadataHasBeenSet = true; m_pullRequestCreatedEventMetadata = value; }

    /**
     * <p>Information about the source and destination branches for the pull
     * request.</p>
     */
    inline void SetPullRequestCreatedEventMetadata(PullRequestCreatedEventMetadata&& value) { m_pullRequestCreatedEventMetadataHasBeenSet = true; m_pullRequestCreatedEventMetadata = std::move(value); }

    /**
     * <p>Information about the source and destination branches for the pull
     * request.</p>
     */
    inline PullRequestEvent& WithPullRequestCreatedEventMetadata(const PullRequestCreatedEventMetadata& value) { SetPullRequestCreatedEventMetadata(value); return *this;}

    /**
     * <p>Information about the source and destination branches for the pull
     * request.</p>
     */
    inline PullRequestEvent& WithPullRequestCreatedEventMetadata(PullRequestCreatedEventMetadata&& value) { SetPullRequestCreatedEventMetadata(std::move(value)); return *this;}


    /**
     * <p>Information about the change in status for the pull request event.</p>
     */
    inline const PullRequestStatusChangedEventMetadata& GetPullRequestStatusChangedEventMetadata() const{ return m_pullRequestStatusChangedEventMetadata; }

    /**
     * <p>Information about the change in status for the pull request event.</p>
     */
    inline bool PullRequestStatusChangedEventMetadataHasBeenSet() const { return m_pullRequestStatusChangedEventMetadataHasBeenSet; }

    /**
     * <p>Information about the change in status for the pull request event.</p>
     */
    inline void SetPullRequestStatusChangedEventMetadata(const PullRequestStatusChangedEventMetadata& value) { m_pullRequestStatusChangedEventMetadataHasBeenSet = true; m_pullRequestStatusChangedEventMetadata = value; }

    /**
     * <p>Information about the change in status for the pull request event.</p>
     */
    inline void SetPullRequestStatusChangedEventMetadata(PullRequestStatusChangedEventMetadata&& value) { m_pullRequestStatusChangedEventMetadataHasBeenSet = true; m_pullRequestStatusChangedEventMetadata = std::move(value); }

    /**
     * <p>Information about the change in status for the pull request event.</p>
     */
    inline PullRequestEvent& WithPullRequestStatusChangedEventMetadata(const PullRequestStatusChangedEventMetadata& value) { SetPullRequestStatusChangedEventMetadata(value); return *this;}

    /**
     * <p>Information about the change in status for the pull request event.</p>
     */
    inline PullRequestEvent& WithPullRequestStatusChangedEventMetadata(PullRequestStatusChangedEventMetadata&& value) { SetPullRequestStatusChangedEventMetadata(std::move(value)); return *this;}


    /**
     * <p>Information about the updated source branch for the pull request event. </p>
     */
    inline const PullRequestSourceReferenceUpdatedEventMetadata& GetPullRequestSourceReferenceUpdatedEventMetadata() const{ return m_pullRequestSourceReferenceUpdatedEventMetadata; }

    /**
     * <p>Information about the updated source branch for the pull request event. </p>
     */
    inline bool PullRequestSourceReferenceUpdatedEventMetadataHasBeenSet() const { return m_pullRequestSourceReferenceUpdatedEventMetadataHasBeenSet; }

    /**
     * <p>Information about the updated source branch for the pull request event. </p>
     */
    inline void SetPullRequestSourceReferenceUpdatedEventMetadata(const PullRequestSourceReferenceUpdatedEventMetadata& value) { m_pullRequestSourceReferenceUpdatedEventMetadataHasBeenSet = true; m_pullRequestSourceReferenceUpdatedEventMetadata = value; }

    /**
     * <p>Information about the updated source branch for the pull request event. </p>
     */
    inline void SetPullRequestSourceReferenceUpdatedEventMetadata(PullRequestSourceReferenceUpdatedEventMetadata&& value) { m_pullRequestSourceReferenceUpdatedEventMetadataHasBeenSet = true; m_pullRequestSourceReferenceUpdatedEventMetadata = std::move(value); }

    /**
     * <p>Information about the updated source branch for the pull request event. </p>
     */
    inline PullRequestEvent& WithPullRequestSourceReferenceUpdatedEventMetadata(const PullRequestSourceReferenceUpdatedEventMetadata& value) { SetPullRequestSourceReferenceUpdatedEventMetadata(value); return *this;}

    /**
     * <p>Information about the updated source branch for the pull request event. </p>
     */
    inline PullRequestEvent& WithPullRequestSourceReferenceUpdatedEventMetadata(PullRequestSourceReferenceUpdatedEventMetadata&& value) { SetPullRequestSourceReferenceUpdatedEventMetadata(std::move(value)); return *this;}


    /**
     * <p>Information about the change in mergability state for the pull request
     * event.</p>
     */
    inline const PullRequestMergedStateChangedEventMetadata& GetPullRequestMergedStateChangedEventMetadata() const{ return m_pullRequestMergedStateChangedEventMetadata; }

    /**
     * <p>Information about the change in mergability state for the pull request
     * event.</p>
     */
    inline bool PullRequestMergedStateChangedEventMetadataHasBeenSet() const { return m_pullRequestMergedStateChangedEventMetadataHasBeenSet; }

    /**
     * <p>Information about the change in mergability state for the pull request
     * event.</p>
     */
    inline void SetPullRequestMergedStateChangedEventMetadata(const PullRequestMergedStateChangedEventMetadata& value) { m_pullRequestMergedStateChangedEventMetadataHasBeenSet = true; m_pullRequestMergedStateChangedEventMetadata = value; }

    /**
     * <p>Information about the change in mergability state for the pull request
     * event.</p>
     */
    inline void SetPullRequestMergedStateChangedEventMetadata(PullRequestMergedStateChangedEventMetadata&& value) { m_pullRequestMergedStateChangedEventMetadataHasBeenSet = true; m_pullRequestMergedStateChangedEventMetadata = std::move(value); }

    /**
     * <p>Information about the change in mergability state for the pull request
     * event.</p>
     */
    inline PullRequestEvent& WithPullRequestMergedStateChangedEventMetadata(const PullRequestMergedStateChangedEventMetadata& value) { SetPullRequestMergedStateChangedEventMetadata(value); return *this;}

    /**
     * <p>Information about the change in mergability state for the pull request
     * event.</p>
     */
    inline PullRequestEvent& WithPullRequestMergedStateChangedEventMetadata(PullRequestMergedStateChangedEventMetadata&& value) { SetPullRequestMergedStateChangedEventMetadata(std::move(value)); return *this;}


    /**
     * <p>Information about a pull request event.</p>
     */
    inline const ApprovalRuleEventMetadata& GetApprovalRuleEventMetadata() const{ return m_approvalRuleEventMetadata; }

    /**
     * <p>Information about a pull request event.</p>
     */
    inline bool ApprovalRuleEventMetadataHasBeenSet() const { return m_approvalRuleEventMetadataHasBeenSet; }

    /**
     * <p>Information about a pull request event.</p>
     */
    inline void SetApprovalRuleEventMetadata(const ApprovalRuleEventMetadata& value) { m_approvalRuleEventMetadataHasBeenSet = true; m_approvalRuleEventMetadata = value; }

    /**
     * <p>Information about a pull request event.</p>
     */
    inline void SetApprovalRuleEventMetadata(ApprovalRuleEventMetadata&& value) { m_approvalRuleEventMetadataHasBeenSet = true; m_approvalRuleEventMetadata = std::move(value); }

    /**
     * <p>Information about a pull request event.</p>
     */
    inline PullRequestEvent& WithApprovalRuleEventMetadata(const ApprovalRuleEventMetadata& value) { SetApprovalRuleEventMetadata(value); return *this;}

    /**
     * <p>Information about a pull request event.</p>
     */
    inline PullRequestEvent& WithApprovalRuleEventMetadata(ApprovalRuleEventMetadata&& value) { SetApprovalRuleEventMetadata(std::move(value)); return *this;}


    /**
     * <p>Information about an approval state change for a pull request.</p>
     */
    inline const ApprovalStateChangedEventMetadata& GetApprovalStateChangedEventMetadata() const{ return m_approvalStateChangedEventMetadata; }

    /**
     * <p>Information about an approval state change for a pull request.</p>
     */
    inline bool ApprovalStateChangedEventMetadataHasBeenSet() const { return m_approvalStateChangedEventMetadataHasBeenSet; }

    /**
     * <p>Information about an approval state change for a pull request.</p>
     */
    inline void SetApprovalStateChangedEventMetadata(const ApprovalStateChangedEventMetadata& value) { m_approvalStateChangedEventMetadataHasBeenSet = true; m_approvalStateChangedEventMetadata = value; }

    /**
     * <p>Information about an approval state change for a pull request.</p>
     */
    inline void SetApprovalStateChangedEventMetadata(ApprovalStateChangedEventMetadata&& value) { m_approvalStateChangedEventMetadataHasBeenSet = true; m_approvalStateChangedEventMetadata = std::move(value); }

    /**
     * <p>Information about an approval state change for a pull request.</p>
     */
    inline PullRequestEvent& WithApprovalStateChangedEventMetadata(const ApprovalStateChangedEventMetadata& value) { SetApprovalStateChangedEventMetadata(value); return *this;}

    /**
     * <p>Information about an approval state change for a pull request.</p>
     */
    inline PullRequestEvent& WithApprovalStateChangedEventMetadata(ApprovalStateChangedEventMetadata&& value) { SetApprovalStateChangedEventMetadata(std::move(value)); return *this;}


    /**
     * <p>Information about an approval rule override event for a pull request.</p>
     */
    inline const ApprovalRuleOverriddenEventMetadata& GetApprovalRuleOverriddenEventMetadata() const{ return m_approvalRuleOverriddenEventMetadata; }

    /**
     * <p>Information about an approval rule override event for a pull request.</p>
     */
    inline bool ApprovalRuleOverriddenEventMetadataHasBeenSet() const { return m_approvalRuleOverriddenEventMetadataHasBeenSet; }

    /**
     * <p>Information about an approval rule override event for a pull request.</p>
     */
    inline void SetApprovalRuleOverriddenEventMetadata(const ApprovalRuleOverriddenEventMetadata& value) { m_approvalRuleOverriddenEventMetadataHasBeenSet = true; m_approvalRuleOverriddenEventMetadata = value; }

    /**
     * <p>Information about an approval rule override event for a pull request.</p>
     */
    inline void SetApprovalRuleOverriddenEventMetadata(ApprovalRuleOverriddenEventMetadata&& value) { m_approvalRuleOverriddenEventMetadataHasBeenSet = true; m_approvalRuleOverriddenEventMetadata = std::move(value); }

    /**
     * <p>Information about an approval rule override event for a pull request.</p>
     */
    inline PullRequestEvent& WithApprovalRuleOverriddenEventMetadata(const ApprovalRuleOverriddenEventMetadata& value) { SetApprovalRuleOverriddenEventMetadata(value); return *this;}

    /**
     * <p>Information about an approval rule override event for a pull request.</p>
     */
    inline PullRequestEvent& WithApprovalRuleOverriddenEventMetadata(ApprovalRuleOverriddenEventMetadata&& value) { SetApprovalRuleOverriddenEventMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::Utils::DateTime m_eventDate;
    bool m_eventDateHasBeenSet = false;

    PullRequestEventType m_pullRequestEventType;
    bool m_pullRequestEventTypeHasBeenSet = false;

    Aws::String m_actorArn;
    bool m_actorArnHasBeenSet = false;

    PullRequestCreatedEventMetadata m_pullRequestCreatedEventMetadata;
    bool m_pullRequestCreatedEventMetadataHasBeenSet = false;

    PullRequestStatusChangedEventMetadata m_pullRequestStatusChangedEventMetadata;
    bool m_pullRequestStatusChangedEventMetadataHasBeenSet = false;

    PullRequestSourceReferenceUpdatedEventMetadata m_pullRequestSourceReferenceUpdatedEventMetadata;
    bool m_pullRequestSourceReferenceUpdatedEventMetadataHasBeenSet = false;

    PullRequestMergedStateChangedEventMetadata m_pullRequestMergedStateChangedEventMetadata;
    bool m_pullRequestMergedStateChangedEventMetadataHasBeenSet = false;

    ApprovalRuleEventMetadata m_approvalRuleEventMetadata;
    bool m_approvalRuleEventMetadataHasBeenSet = false;

    ApprovalStateChangedEventMetadata m_approvalStateChangedEventMetadata;
    bool m_approvalStateChangedEventMetadataHasBeenSet = false;

    ApprovalRuleOverriddenEventMetadata m_approvalRuleOverriddenEventMetadata;
    bool m_approvalRuleOverriddenEventMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
