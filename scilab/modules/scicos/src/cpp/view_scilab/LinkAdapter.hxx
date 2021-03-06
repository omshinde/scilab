/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2014-2016 - Scilab Enterprises - Clement DAVID
 *
 * Copyright (C) 2012 - 2016 - Scilab Enterprises
 *
 * This file is hereby licensed under the terms of the GNU GPL v2.0,
 * pursuant to article 5.3.4 of the CeCILL v.2.1.
 * This file was originally licensed under the terms of the CeCILL v2.1,
 * and continues to be available under such terms.
 * For more information, see the COPYING file which you should have received
 * along with this program.
 *
 */

#ifndef LINKADAPTER_HXX_
#define LINKADAPTER_HXX_

#include <string>

#include "adapters_utilities.hxx"
#include "BaseAdapter.hxx"
#include "model/Link.hxx"

namespace org_scilab_modules_scicos
{
namespace view_scilab
{

class LinkAdapter : public BaseAdapter<LinkAdapter, org_scilab_modules_scicos::model::Link>
{
public:
    LinkAdapter(const Controller& c, org_scilab_modules_scicos::model::Link* adaptee);
    LinkAdapter(const LinkAdapter& adapter);
    ~LinkAdapter();

    static const std::wstring getSharedTypeStr()
    {
        return L"Link";
    }

    std::wstring getTypeStr();
    std::wstring getShortTypeStr();

    // move (if possible) the partial informatios to the model
    static void relink(Controller& controller, model::BaseObject* adaptee, const std::vector<ScicosID>& children);
    // manage partial information after a model clone
    static void add_partial_links_information(Controller& controller, model::BaseObject* original, model::BaseObject* cloned);

};

} /* namespace view_scilab */
} /* namespace org_scilab_modules_scicos */

#endif /* LINKADAPTER_HXX_ */
