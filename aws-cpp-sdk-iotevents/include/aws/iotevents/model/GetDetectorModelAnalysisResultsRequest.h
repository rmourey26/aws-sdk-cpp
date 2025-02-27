﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class AWS_IOTEVENTS_API GetDetectorModelAnalysisResultsRequest : public IoTEventsRequest
  {
  public:
    GetDetectorModelAnalysisResultsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDetectorModelAnalysisResults"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline void SetAnalysisId(const Aws::String& value) { m_analysisIdHasBeenSet = true; m_analysisId = value; }

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline void SetAnalysisId(Aws::String&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::move(value); }

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline void SetAnalysisId(const char* value) { m_analysisIdHasBeenSet = true; m_analysisId.assign(value); }

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline GetDetectorModelAnalysisResultsRequest& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline GetDetectorModelAnalysisResultsRequest& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline GetDetectorModelAnalysisResultsRequest& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}


    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline GetDetectorModelAnalysisResultsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline GetDetectorModelAnalysisResultsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline GetDetectorModelAnalysisResultsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline GetDetectorModelAnalysisResultsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
