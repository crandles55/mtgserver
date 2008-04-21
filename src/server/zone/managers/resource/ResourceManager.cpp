/*
 *	server/zone/managers/resource/ResourceManager.cpp generated by engine3 IDL compiler 0.55
 */

#include "../../objects/player/Player.h"

#include "../../objects/tangible/resource/ResourceContainerImplementation.h"

#include "ResourceManager.h"

#include "ResourceManagerImplementation.h"

/*
 *	ResourceManagerStub
 */

ResourceManager::ResourceManager() : DistributedObjectStub(NULL) {
}

ResourceManager::ResourceManager(DistributedObjectServant* obj) : DistributedObjectStub(obj) {
}

ResourceManager::ResourceManager(ResourceManager& ref) : DistributedObjectStub(ref) {
}

ResourceManager::~ResourceManager() {
}

ResourceManager* ResourceManager::clone() {
	return new ResourceManager(*this);
}


void ResourceManager::theShift() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->theShift();
}

void ResourceManager::stop() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->stop();
}

void ResourceManager::clearResources() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->clearResources();
}

bool ResourceManager::checkResource(Player* player, string& resourcename, int SurveyToolType) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 9);
		method.addObjectParameter(player);
		method.addAsciiParameter(resourcename);
		method.addSignedIntParameter(SurveyToolType);

		return method.executeWithBooleanReturn();
	} else
		return ((ResourceManagerImplementation*) _impl)->checkResource(player, resourcename, SurveyToolType);
}

void ResourceManager::sendSurveyMessage(Player* player, string& resourcename) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 10);
		method.addObjectParameter(player);
		method.addAsciiParameter(resourcename);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->sendSurveyMessage(player, resourcename);
}

void ResourceManager::sendSampleMessage(Player* player, string& resourcename) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 11);
		method.addObjectParameter(player);
		method.addAsciiParameter(resourcename);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->sendSampleMessage(player, resourcename);
}

void ResourceManager::setResourceData(ResourceContainerImplementation* resContainer) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 12);
		method.addObjectParameter(resContainer);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->setResourceData(resContainer);
}

bool ResourceManager::sendSurveyResources(Player* player, int SurveyToolType) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 13);
		method.addObjectParameter(player);
		method.addSignedIntParameter(SurveyToolType);

		return method.executeWithBooleanReturn();
	} else
		return ((ResourceManagerImplementation*) _impl)->sendSurveyResources(player, SurveyToolType);
}

void ResourceManager::getClassSeven(const string& str, string& clas) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 14);
		method.addAsciiParameter(str);
		method.addAsciiParameter(clas);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->getClassSeven(str, clas);
}

void ResourceManager::getResourceContainerName(const string& str, string& name) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 15);
		method.addAsciiParameter(str);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((ResourceManagerImplementation*) _impl)->getResourceContainerName(str, name);
}

/*
 *	ResourceManagerAdapter
 */

ResourceManagerAdapter::ResourceManagerAdapter(ResourceManagerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* ResourceManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		theShift();
		break;
	case 7:
		stop();
		break;
	case 8:
		clearResources();
		break;
	case 9:
		resp->insertBoolean(checkResource((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_checkResource__Player_string_int_), inv->getSignedIntParameter()));
		break;
	case 10:
		sendSurveyMessage((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendSurveyMessage__Player_string_));
		break;
	case 11:
		sendSampleMessage((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendSampleMessage__Player_string_));
		break;
	case 12:
		setResourceData((ResourceContainerImplementation*) inv->getObjectParameter());
		break;
	case 13:
		resp->insertBoolean(sendSurveyResources((Player*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 14:
		getClassSeven(inv->getAsciiParameter(_param0_getClassSeven__string_string_), inv->getAsciiParameter(_param1_getClassSeven__string_string_));
		break;
	case 15:
		getResourceContainerName(inv->getAsciiParameter(_param0_getResourceContainerName__string_string_), inv->getAsciiParameter(_param1_getResourceContainerName__string_string_));
		break;
	default:
		return NULL;
	}

	return resp;
}

void ResourceManagerAdapter::theShift() {
	return ((ResourceManagerImplementation*) impl)->theShift();
}

void ResourceManagerAdapter::stop() {
	return ((ResourceManagerImplementation*) impl)->stop();
}

void ResourceManagerAdapter::clearResources() {
	return ((ResourceManagerImplementation*) impl)->clearResources();
}

bool ResourceManagerAdapter::checkResource(Player* player, string& resourcename, int SurveyToolType) {
	return ((ResourceManagerImplementation*) impl)->checkResource(player, resourcename, SurveyToolType);
}

void ResourceManagerAdapter::sendSurveyMessage(Player* player, string& resourcename) {
	return ((ResourceManagerImplementation*) impl)->sendSurveyMessage(player, resourcename);
}

void ResourceManagerAdapter::sendSampleMessage(Player* player, string& resourcename) {
	return ((ResourceManagerImplementation*) impl)->sendSampleMessage(player, resourcename);
}

void ResourceManagerAdapter::setResourceData(ResourceContainerImplementation* resContainer) {
	return ((ResourceManagerImplementation*) impl)->setResourceData(resContainer);
}

bool ResourceManagerAdapter::sendSurveyResources(Player* player, int SurveyToolType) {
	return ((ResourceManagerImplementation*) impl)->sendSurveyResources(player, SurveyToolType);
}

void ResourceManagerAdapter::getClassSeven(const string& str, string& clas) {
	return ((ResourceManagerImplementation*) impl)->getClassSeven(str, clas);
}

void ResourceManagerAdapter::getResourceContainerName(const string& str, string& name) {
	return ((ResourceManagerImplementation*) impl)->getResourceContainerName(str, name);
}

/*
 *	ResourceManagerHelper
 */

ResourceManagerHelper::ResourceManagerHelper() {
	className = "ResourceManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ResourceManagerHelper::finalizeHelper() {
	ResourceManagerHelper::finalize();
}

DistributedObject* ResourceManagerHelper::instantiateObject() {
	return new ResourceManager();
}

DistributedObjectAdapter* ResourceManagerHelper::createAdapter(DistributedObjectServant* obj) {
	DistributedObjectAdapter* adapter = new ResourceManagerAdapter((ResourceManagerImplementation*) obj);

	DistributedObjectStub* stub = new ResourceManager(obj);
	stub->_setClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	ResourceManagerServant
 */

ResourceManagerServant::ResourceManagerServant() {
	_classHelper = ResourceManagerHelper::instance();
}

ResourceManagerServant::~ResourceManagerServant() {
}

void ResourceManagerServant::_setStub(DistributedObjectStub* stub) {
	_this = (ResourceManager*) stub;
}

DistributedObjectStub* ResourceManagerServant::_getStub() {
	return _this;
}

