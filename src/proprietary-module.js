/**
 * Copyright (c) 2024 Acme Corporation. All rights reserved.
 *
 * PROPRIETARY AND CONFIDENTIAL
 *
 * This source code is the property of Acme Corporation and contains
 * trade secrets and confidential information. Unauthorized copying,
 * distribution, or use of this material is strictly prohibited.
 *
 * For licensing inquiries, contact: licensing@acme-example.com
 */

function internalAlgorithm(data) {
  return data.map(x => x * 2 + 1);
}

module.exports = { internalAlgorithm };
