/*
 *	server/zone/objects/guild/Guild.cpp generated by engine3 IDL compiler 0.55
 */

#include "../player/Player.h"

#include "../../managers/guild/GuildManager.h"

#include "Guild.h"

#include "GuildImplementation.h"

/*
 *	GuildStub
 */

Guild::Guild() : DistributedObjectStub(NULL) {
}

Guild::Guild(DistributedObjectServant* obj) : DistributedObjectStub(obj) {
}

Guild::Guild(Guild& ref) : DistributedObjectStub(ref) {
}

Guild::~Guild() {
}

Guild* Guild::clone() {
	return new Guild(*this);
}


void Guild::sendGuildListTo(Player* player, bool doLock) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 6);
		method.addObjectParameter(player);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((GuildImplementation*) _impl)->sendGuildListTo(player, doLock);
}

void Guild::updateGuildFor(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GuildImplementation*) _impl)->updateGuildFor(player);
}

void Guild::deleteGuildFor(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GuildImplementation*) _impl)->deleteGuildFor(player);
}

void Guild::setGuildManager(GuildManager* gmanager) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 9);
		method.addObjectParameter(gmanager);

		method.executeWithVoidReturn();
	} else
		((GuildImplementation*) _impl)->setGuildManager(gmanager);
}

unsigned int Guild::getGuildID() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 10);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((GuildImplementation*) _impl)->getGuildID();
}

string& Guild::getGuildName() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 11);

		method.executeWithAsciiReturn(_return_getGuildName);
		return _return_getGuildName;
	} else
		return ((GuildImplementation*) _impl)->getGuildName();
}

string& Guild::getGuildTag() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 12);

		method.executeWithAsciiReturn(_return_getGuildTag);
		return _return_getGuildTag;
	} else
		return ((GuildImplementation*) _impl)->getGuildTag();
}

/*
 *	GuildAdapter
 */

GuildAdapter::GuildAdapter(GuildImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* GuildAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendGuildListTo((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 7:
		updateGuildFor((Player*) inv->getObjectParameter());
		break;
	case 8:
		deleteGuildFor((Player*) inv->getObjectParameter());
		break;
	case 9:
		setGuildManager((GuildManager*) inv->getObjectParameter());
		break;
	case 10:
		resp->insertInt(getGuildID());
		break;
	case 11:
		resp->insertAscii(getGuildName());
		break;
	case 12:
		resp->insertAscii(getGuildTag());
		break;
	default:
		return NULL;
	}

	return resp;
}

void GuildAdapter::sendGuildListTo(Player* player, bool doLock) {
	return ((GuildImplementation*) impl)->sendGuildListTo(player, doLock);
}

void GuildAdapter::updateGuildFor(Player* player) {
	return ((GuildImplementation*) impl)->updateGuildFor(player);
}

void GuildAdapter::deleteGuildFor(Player* player) {
	return ((GuildImplementation*) impl)->deleteGuildFor(player);
}

void GuildAdapter::setGuildManager(GuildManager* gmanager) {
	return ((GuildImplementation*) impl)->setGuildManager(gmanager);
}

unsigned int GuildAdapter::getGuildID() {
	return ((GuildImplementation*) impl)->getGuildID();
}

string& GuildAdapter::getGuildName() {
	return ((GuildImplementation*) impl)->getGuildName();
}

string& GuildAdapter::getGuildTag() {
	return ((GuildImplementation*) impl)->getGuildTag();
}

/*
 *	GuildHelper
 */

GuildHelper::GuildHelper() {
	className = "Guild";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void GuildHelper::finalizeHelper() {
	GuildHelper::finalize();
}

DistributedObject* GuildHelper::instantiateObject() {
	return new Guild();
}

DistributedObjectAdapter* GuildHelper::createAdapter(DistributedObjectServant* obj) {
	DistributedObjectAdapter* adapter = new GuildAdapter((GuildImplementation*) obj);

	DistributedObjectStub* stub = new Guild(obj);
	stub->_setClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	GuildServant
 */

GuildServant::GuildServant() {
	_classHelper = GuildHelper::instance();
}

GuildServant::~GuildServant() {
}

void GuildServant::_setStub(DistributedObjectStub* stub) {
	_this = (Guild*) stub;
}

DistributedObjectStub* GuildServant::_getStub() {
	return _this;
}

