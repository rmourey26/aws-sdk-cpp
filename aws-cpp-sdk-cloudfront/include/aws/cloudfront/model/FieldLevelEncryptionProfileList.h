﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/FieldLevelEncryptionProfileSummary.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>List of field-level encryption profiles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/FieldLevelEncryptionProfileList">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API FieldLevelEncryptionProfileList
  {
  public:
    FieldLevelEncryptionProfileList();
    FieldLevelEncryptionProfileList(const Aws::Utils::Xml::XmlNode& xmlNode);
    FieldLevelEncryptionProfileList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your profiles where you left off.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your profiles where you left off.</p>
     */
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your profiles where you left off.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your profiles where you left off.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your profiles where you left off.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your profiles where you left off.</p>
     */
    inline FieldLevelEncryptionProfileList& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your profiles where you left off.</p>
     */
    inline FieldLevelEncryptionProfileList& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If there are more elements to be listed, this element is present and contains
     * the value that you can use for the <code>Marker</code> request parameter to
     * continue listing your profiles where you left off.</p>
     */
    inline FieldLevelEncryptionProfileList& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The maximum number of field-level encryption profiles you want in the
     * response body. </p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of field-level encryption profiles you want in the
     * response body. </p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of field-level encryption profiles you want in the
     * response body. </p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of field-level encryption profiles you want in the
     * response body. </p>
     */
    inline FieldLevelEncryptionProfileList& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p>The number of field-level encryption profiles.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of field-level encryption profiles.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of field-level encryption profiles.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of field-level encryption profiles.</p>
     */
    inline FieldLevelEncryptionProfileList& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The field-level encryption profile items.</p>
     */
    inline const Aws::Vector<FieldLevelEncryptionProfileSummary>& GetItems() const{ return m_items; }

    /**
     * <p>The field-level encryption profile items.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The field-level encryption profile items.</p>
     */
    inline void SetItems(const Aws::Vector<FieldLevelEncryptionProfileSummary>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The field-level encryption profile items.</p>
     */
    inline void SetItems(Aws::Vector<FieldLevelEncryptionProfileSummary>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The field-level encryption profile items.</p>
     */
    inline FieldLevelEncryptionProfileList& WithItems(const Aws::Vector<FieldLevelEncryptionProfileSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>The field-level encryption profile items.</p>
     */
    inline FieldLevelEncryptionProfileList& WithItems(Aws::Vector<FieldLevelEncryptionProfileSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The field-level encryption profile items.</p>
     */
    inline FieldLevelEncryptionProfileList& AddItems(const FieldLevelEncryptionProfileSummary& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The field-level encryption profile items.</p>
     */
    inline FieldLevelEncryptionProfileList& AddItems(FieldLevelEncryptionProfileSummary&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<FieldLevelEncryptionProfileSummary> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
