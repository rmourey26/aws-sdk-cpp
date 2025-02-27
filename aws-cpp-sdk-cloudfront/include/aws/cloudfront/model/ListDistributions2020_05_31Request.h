﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The request to list your distributions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ListDistributions2020_05_31Request : public CloudFrontRequest
  {
  public:
    ListDistributions2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDistributions"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * distributions. The results include distributions in the list that occur after
     * the marker. To get the next page of results, set the <code>Marker</code> to the
     * value of the <code>NextMarker</code> from the current page's response (which is
     * also the ID of the last distribution on that page).</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * distributions. The results include distributions in the list that occur after
     * the marker. To get the next page of results, set the <code>Marker</code> to the
     * value of the <code>NextMarker</code> from the current page's response (which is
     * also the ID of the last distribution on that page).</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * distributions. The results include distributions in the list that occur after
     * the marker. To get the next page of results, set the <code>Marker</code> to the
     * value of the <code>NextMarker</code> from the current page's response (which is
     * also the ID of the last distribution on that page).</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * distributions. The results include distributions in the list that occur after
     * the marker. To get the next page of results, set the <code>Marker</code> to the
     * value of the <code>NextMarker</code> from the current page's response (which is
     * also the ID of the last distribution on that page).</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * distributions. The results include distributions in the list that occur after
     * the marker. To get the next page of results, set the <code>Marker</code> to the
     * value of the <code>NextMarker</code> from the current page's response (which is
     * also the ID of the last distribution on that page).</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * distributions. The results include distributions in the list that occur after
     * the marker. To get the next page of results, set the <code>Marker</code> to the
     * value of the <code>NextMarker</code> from the current page's response (which is
     * also the ID of the last distribution on that page).</p>
     */
    inline ListDistributions2020_05_31Request& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * distributions. The results include distributions in the list that occur after
     * the marker. To get the next page of results, set the <code>Marker</code> to the
     * value of the <code>NextMarker</code> from the current page's response (which is
     * also the ID of the last distribution on that page).</p>
     */
    inline ListDistributions2020_05_31Request& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use this when paginating results to indicate where to begin in your list of
     * distributions. The results include distributions in the list that occur after
     * the marker. To get the next page of results, set the <code>Marker</code> to the
     * value of the <code>NextMarker</code> from the current page's response (which is
     * also the ID of the last distribution on that page).</p>
     */
    inline ListDistributions2020_05_31Request& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of distributions you want in the response body.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of distributions you want in the response body.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of distributions you want in the response body.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of distributions you want in the response body.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>The maximum number of distributions you want in the response body.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of distributions you want in the response body.</p>
     */
    inline ListDistributions2020_05_31Request& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of distributions you want in the response body.</p>
     */
    inline ListDistributions2020_05_31Request& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The maximum number of distributions you want in the response body.</p>
     */
    inline ListDistributions2020_05_31Request& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
