﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
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
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>Contains the resource id (<code>rid</code>) and the time it took to process
   * the request (<code>timems</code>).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/SearchStatus">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCHDOMAIN_API SearchStatus
  {
  public:
    SearchStatus();
    SearchStatus(Aws::Utils::Json::JsonView jsonValue);
    SearchStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How long it took to process the request, in milliseconds.</p>
     */
    inline long long GetTimems() const{ return m_timems; }

    /**
     * <p>How long it took to process the request, in milliseconds.</p>
     */
    inline bool TimemsHasBeenSet() const { return m_timemsHasBeenSet; }

    /**
     * <p>How long it took to process the request, in milliseconds.</p>
     */
    inline void SetTimems(long long value) { m_timemsHasBeenSet = true; m_timems = value; }

    /**
     * <p>How long it took to process the request, in milliseconds.</p>
     */
    inline SearchStatus& WithTimems(long long value) { SetTimems(value); return *this;}


    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline const Aws::String& GetRid() const{ return m_rid; }

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline bool RidHasBeenSet() const { return m_ridHasBeenSet; }

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline void SetRid(const Aws::String& value) { m_ridHasBeenSet = true; m_rid = value; }

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline void SetRid(Aws::String&& value) { m_ridHasBeenSet = true; m_rid = std::move(value); }

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline void SetRid(const char* value) { m_ridHasBeenSet = true; m_rid.assign(value); }

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline SearchStatus& WithRid(const Aws::String& value) { SetRid(value); return *this;}

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline SearchStatus& WithRid(Aws::String&& value) { SetRid(std::move(value)); return *this;}

    /**
     * <p>The encrypted resource ID for the request.</p>
     */
    inline SearchStatus& WithRid(const char* value) { SetRid(value); return *this;}

  private:

    long long m_timems;
    bool m_timemsHasBeenSet = false;

    Aws::String m_rid;
    bool m_ridHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
