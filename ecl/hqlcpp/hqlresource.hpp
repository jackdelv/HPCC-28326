/*##############################################################################

    HPCC SYSTEMS software Copyright (C) 2012 HPCC Systems®.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
############################################################################## */
#ifndef __HQLRESOURCE_HPP_
#define __HQLRESOURCE_HPP_

#include "workunit.hpp"
#include "hqlcpp.hpp"
#include "hqlcpp.ipp"

IHqlExpression * resourceThorGraph(HqlCppTranslator & translator, IHqlExpression * expr, ClusterType targetClusterType, unsigned clusterSize, IHqlExpression * graphIdExpr);
IHqlExpression * resourceLibraryGraph(HqlCppTranslator & translator, IHqlExpression * expr, ClusterType targetClusterType, unsigned clusterSize, IHqlExpression * graphIdExpr, unsigned numResults);
IHqlExpression * resourceLoopGraph(HqlCppTranslator & translator, HqlExprCopyArray & activeRows, IHqlExpression * expr, ClusterType targetClusterType, IHqlExpression * graphIdExpr, unsigned numResults, bool insideChildQuery, bool unlimitedResources);
IHqlExpression * resourceNewChildGraph(BuildCtx & ctx, HqlCppTranslator & translator, HqlExprCopyArray & activeRows, IHqlExpression * expr, ClusterType targetClusterType, IHqlExpression * graphIdExpr, unsigned numResults);
IHqlExpression * resourceRemoteGraph(HqlCppTranslator & translator, IHqlExpression * expr, ClusterType targetClusterType, unsigned clusterSize);

IHqlExpression * convertSpillsToActivities(IHqlExpression * expr, bool createGraphResults);

#endif
