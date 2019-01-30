/*##############################################################################

    HPCC SYSTEMS software Copyright (C) 2017 HPCC Systems®.

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

#ifndef _CONFIG2_XMLENVIRONMENTMGR_HPP_
#define _CONFIG2_XMLENVIRONMENTMGR_HPP_

#include "EnvironmentMgr.hpp"

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/detail/xml_parser_writer_settings.hpp>

namespace pt = boost::property_tree;

class XMLEnvironmentMgr :   public EnvironmentMgr
{
    public:

        XMLEnvironmentMgr() : EnvironmentMgr() { }
        ~XMLEnvironmentMgr() { }
        bool serialize(std::ostream &out, const std::shared_ptr<EnvironmentNode> &pStartNode);


    protected:

        bool createParser() override;
        std::vector<std::shared_ptr<EnvironmentNode>> doLoadEnvironment(std::istream &in, const std::shared_ptr<SchemaItem> &pSchemaItem, const std::string itemType = std::string("")) override;
        bool save(std::ostream &out) override;
        void serializeTree(pt::ptree &envTree, const std::shared_ptr<EnvironmentNode> &pEnvNode) const;

};

#endif
