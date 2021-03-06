/*
 *  Copyright 2008-2012 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */


/*! \file adjacent_difference.h
 *  \brief C++ implementation of adjacent_difference.
 */

#pragma once

#include <thrust/detail/config.h>
#include <thrust/system/cpp/detail/tag.h>
#include <thrust/system/detail/internal/scalar/adjacent_difference.h>

namespace thrust
{
namespace system
{
namespace cpp
{
namespace detail
{

template <typename InputIterator,
          typename OutputIterator,
          typename BinaryFunction>
OutputIterator adjacent_difference(tag,
                                   InputIterator first,
                                   InputIterator last,
                                   OutputIterator result,
                                   BinaryFunction binary_op)
{
  return thrust::system::detail::internal::scalar::adjacent_difference(first, last, result, binary_op);
}

} // end namespace detail
} // end namespace cpp
} // end namespace system
} // end namespace thrust

