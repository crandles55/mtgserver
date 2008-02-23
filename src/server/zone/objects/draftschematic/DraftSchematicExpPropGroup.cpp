/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/objects/draftschematic/DraftSchematicExpPropGroup.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../../packets/object/ObjectControllerMessage.h"

#include "DraftSchematicExpPropGroup.h"

#include "DraftSchematicExpPropGroupImplementation.h"

/*
 *	DraftSchematicExpPropGroupStub
 */

DraftSchematicExpPropGroup::DraftSchematicExpPropGroup() : ORBObjectStub(NULL) {
}

DraftSchematicExpPropGroup::DraftSchematicExpPropGroup(ORBObjectServant* obj) : ORBObjectStub(obj) {
}

DraftSchematicExpPropGroup::DraftSchematicExpPropGroup(DraftSchematicExpPropGroup& ref) : ORBObjectStub(ref) {
}

DraftSchematicExpPropGroup::~DraftSchematicExpPropGroup() {
}

DraftSchematicExpPropGroup* DraftSchematicExpPropGroup::clone() {
	return new DraftSchematicExpPropGroup(*this);
}


void DraftSchematicExpPropGroup::addExperimentalProperty(const string& experimentalPropertyType, unsigned int weight) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addAsciiParameter(experimentalPropertyType);
		invocation.addUnsignedIntParameter(weight);

		invocation.executeWithVoidReturn();
	} else
		((DraftSchematicExpPropGroupImplementation*) _impl)->addExperimentalProperty(experimentalPropertyType, weight);
}

void DraftSchematicExpPropGroup::sendToPlayer(ObjectControllerMessage* msg) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addObjectParameter(msg);

		invocation.executeWithVoidReturn();
	} else
		((DraftSchematicExpPropGroupImplementation*) _impl)->sendToPlayer(msg);
}

bool DraftSchematicExpPropGroup::containsExpPropType(const string& expPropType) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addAsciiParameter(expPropType);

		return invocation.executeWithBooleanReturn();
	} else
		return ((DraftSchematicExpPropGroupImplementation*) _impl)->containsExpPropType(expPropType);
}

float DraftSchematicExpPropGroup::getExpPropPercentage(const string& expPropType) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addAsciiParameter(expPropType);

		return invocation.executeWithFloatReturn();
	} else
		return ((DraftSchematicExpPropGroupImplementation*) _impl)->getExpPropPercentage(expPropType);
}

unsigned int DraftSchematicExpPropGroup::getExpPropPercentageListSize() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((DraftSchematicExpPropGroupImplementation*) _impl)->getExpPropPercentageListSize();
}

float DraftSchematicExpPropGroup::getExpPropPercentage(unsigned int index) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);
		invocation.addUnsignedIntParameter(index);

		return invocation.executeWithFloatReturn();
	} else
		return ((DraftSchematicExpPropGroupImplementation*) _impl)->getExpPropPercentage(index);
}

unsigned char DraftSchematicExpPropGroup::getTypeAndWeight(unsigned int index) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);
		invocation.addUnsignedIntParameter(index);

		return invocation.executeWithUnsignedCharReturn();
	} else
		return ((DraftSchematicExpPropGroupImplementation*) _impl)->getTypeAndWeight(index);
}

/*
 *	DraftSchematicExpPropGroupAdapter
 */

DraftSchematicExpPropGroupAdapter::DraftSchematicExpPropGroupAdapter(DraftSchematicExpPropGroupImplementation* obj) : ORBObjectAdapter((ORBObjectServant*) obj) {
}

Packet* DraftSchematicExpPropGroupAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		addExperimentalProperty(inv->getAsciiParameter(_param0_addExperimentalProperty__string_int_), inv->getUnsignedIntParameter());
		break;
	case 7:
		sendToPlayer((ObjectControllerMessage*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertBoolean(containsExpPropType(inv->getAsciiParameter(_param0_containsExpPropType__string_)));
		break;
	case 9:
		resp->insertFloat(getExpPropPercentage(inv->getAsciiParameter(_param0_getExpPropPercentage__string_)));
		break;
	case 10:
		resp->insertInt(getExpPropPercentageListSize());
		break;
	case 11:
		resp->insertFloat(getExpPropPercentage(inv->getUnsignedIntParameter()));
		break;
	case 12:
		resp->insertByte(getTypeAndWeight(inv->getUnsignedIntParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void DraftSchematicExpPropGroupAdapter::addExperimentalProperty(const string& experimentalPropertyType, unsigned int weight) {
	return ((DraftSchematicExpPropGroupImplementation*) impl)->addExperimentalProperty(experimentalPropertyType, weight);
}

void DraftSchematicExpPropGroupAdapter::sendToPlayer(ObjectControllerMessage* msg) {
	return ((DraftSchematicExpPropGroupImplementation*) impl)->sendToPlayer(msg);
}

bool DraftSchematicExpPropGroupAdapter::containsExpPropType(const string& expPropType) {
	return ((DraftSchematicExpPropGroupImplementation*) impl)->containsExpPropType(expPropType);
}

float DraftSchematicExpPropGroupAdapter::getExpPropPercentage(const string& expPropType) {
	return ((DraftSchematicExpPropGroupImplementation*) impl)->getExpPropPercentage(expPropType);
}

unsigned int DraftSchematicExpPropGroupAdapter::getExpPropPercentageListSize() {
	return ((DraftSchematicExpPropGroupImplementation*) impl)->getExpPropPercentageListSize();
}

float DraftSchematicExpPropGroupAdapter::getExpPropPercentage(unsigned int index) {
	return ((DraftSchematicExpPropGroupImplementation*) impl)->getExpPropPercentage(index);
}

unsigned char DraftSchematicExpPropGroupAdapter::getTypeAndWeight(unsigned int index) {
	return ((DraftSchematicExpPropGroupImplementation*) impl)->getTypeAndWeight(index);
}

/*
 *	DraftSchematicExpPropGroupHelper
 */

DraftSchematicExpPropGroupHelper::DraftSchematicExpPropGroupHelper() {
	className = "DraftSchematicExpPropGroup";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

void DraftSchematicExpPropGroupHelper::finalizeHelper() {
	DraftSchematicExpPropGroupHelper::finalize();
}

ORBObject* DraftSchematicExpPropGroupHelper::instantiateObject() {
	return new DraftSchematicExpPropGroup();
}

ORBObjectAdapter* DraftSchematicExpPropGroupHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new DraftSchematicExpPropGroupAdapter((DraftSchematicExpPropGroupImplementation*) obj);

	ORBObjectStub* stub = new DraftSchematicExpPropGroup(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	DraftSchematicExpPropGroupServant
 */

DraftSchematicExpPropGroupServant::DraftSchematicExpPropGroupServant() {
	_classHelper = DraftSchematicExpPropGroupHelper::instance();
}

DraftSchematicExpPropGroupServant::~DraftSchematicExpPropGroupServant() {
}

void DraftSchematicExpPropGroupServant::_setStub(ORBObjectStub* stub) {
	_this = (DraftSchematicExpPropGroup*) stub;
}

ORBObjectStub* DraftSchematicExpPropGroupServant::_getStub() {
	return _this;
}

