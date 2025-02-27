﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Scheduler
{
namespace Model
{
  class AWS_SCHEDULER_API UpdateScheduleResult
  {
  public:
    UpdateScheduleResult();
    UpdateScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the schedule that you updated.</p>
     */
    inline const Aws::String& GetScheduleArn() const{ return m_scheduleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule that you updated.</p>
     */
    inline void SetScheduleArn(const Aws::String& value) { m_scheduleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule that you updated.</p>
     */
    inline void SetScheduleArn(Aws::String&& value) { m_scheduleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule that you updated.</p>
     */
    inline void SetScheduleArn(const char* value) { m_scheduleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule that you updated.</p>
     */
    inline UpdateScheduleResult& WithScheduleArn(const Aws::String& value) { SetScheduleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule that you updated.</p>
     */
    inline UpdateScheduleResult& WithScheduleArn(Aws::String&& value) { SetScheduleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule that you updated.</p>
     */
    inline UpdateScheduleResult& WithScheduleArn(const char* value) { SetScheduleArn(value); return *this;}

  private:

    Aws::String m_scheduleArn;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
