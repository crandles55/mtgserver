/*
 *	server/zone/objects/tangible/deed/structure/StructureDeed.cpp generated by engine3 IDL compiler 0.60
 */

#include "StructureDeed.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	StructureDeedStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_INITIALIZETRANSIENTMEMBERS__,RPC_PLACESTRUCTURE__CREATUREOBJECT_FLOAT_FLOAT_INT_,RPC_NOTIFYSTRUCTUREPLACED__CREATUREOBJECT_STRUCTUREOBJECT_,RPC_SETSURPLUSMAINTENANCE__INT_,RPC_SETSURPLUSPOWER__INT_,RPC_SETEXTRACTIONRATE__FLOAT_,RPC_SETHOPPERSIZE__FLOAT_,RPC_GETSURPLUSMAINTENANCE__,RPC_GETSURPLUSPOWER__,RPC_GETEXTRACTIONRATE__,RPC_GETHOPPERSIZE__,RPC_ISSTRUCTUREDEED__};

StructureDeed::StructureDeed() : Deed(DummyConstructorParameter::instance()) {
	StructureDeedImplementation* _implementation = new StructureDeedImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

StructureDeed::StructureDeed(DummyConstructorParameter* param) : Deed(param) {
}

StructureDeed::~StructureDeed() {
}



void StructureDeed::fillAttributeList(AttributeListMessage* alm, CreatureObject* object) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(alm, object);
}

int StructureDeed::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void StructureDeed::initializeTransientMembers() {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void StructureDeed::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(values, firstUpdate);
}

int StructureDeed::placeStructure(CreatureObject* creature, float x, float y, int angle) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PLACESTRUCTURE__CREATUREOBJECT_FLOAT_FLOAT_INT_);
		method.addObjectParameter(creature);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addSignedIntParameter(angle);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->placeStructure(creature, x, y, angle);
}

int StructureDeed::notifyStructurePlaced(CreatureObject* creature, StructureObject* structure) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYSTRUCTUREPLACED__CREATUREOBJECT_STRUCTUREOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(structure);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyStructurePlaced(creature, structure);
}

void StructureDeed::setSurplusMaintenance(unsigned int maint) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSURPLUSMAINTENANCE__INT_);
		method.addUnsignedIntParameter(maint);

		method.executeWithVoidReturn();
	} else
		_implementation->setSurplusMaintenance(maint);
}

void StructureDeed::setSurplusPower(unsigned int power) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETSURPLUSPOWER__INT_);
		method.addUnsignedIntParameter(power);

		method.executeWithVoidReturn();
	} else
		_implementation->setSurplusPower(power);
}

void StructureDeed::setExtractionRate(float rate) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETEXTRACTIONRATE__FLOAT_);
		method.addFloatParameter(rate);

		method.executeWithVoidReturn();
	} else
		_implementation->setExtractionRate(rate);
}

void StructureDeed::setHopperSize(float size) {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETHOPPERSIZE__FLOAT_);
		method.addFloatParameter(size);

		method.executeWithVoidReturn();
	} else
		_implementation->setHopperSize(size);
}

unsigned int StructureDeed::getSurplusMaintenance() {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSURPLUSMAINTENANCE__);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getSurplusMaintenance();
}

unsigned int StructureDeed::getSurplusPower() {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSURPLUSPOWER__);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getSurplusPower();
}

float StructureDeed::getExtractionRate() {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEXTRACTIONRATE__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getExtractionRate();
}

float StructureDeed::getHopperSize() {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETHOPPERSIZE__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getHopperSize();
}

bool StructureDeed::isStructureDeed() {
	StructureDeedImplementation* _implementation = static_cast<StructureDeedImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSTRUCTUREDEED__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isStructureDeed();
}

DistributedObjectServant* StructureDeed::_getImplementation() {

	_updated = true;
	return _impl;
}

void StructureDeed::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	StructureDeedImplementation
 */

StructureDeedImplementation::StructureDeedImplementation(DummyConstructorParameter* param) : DeedImplementation(param) {
	_initializeImplementation();
}


StructureDeedImplementation::~StructureDeedImplementation() {
}


void StructureDeedImplementation::finalize() {
}

void StructureDeedImplementation::_initializeImplementation() {
	_setClassHelper(StructureDeedHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void StructureDeedImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<StructureDeed*>(stub);
	DeedImplementation::_setStub(stub);
}

DistributedObjectStub* StructureDeedImplementation::_getStub() {
	return _this;
}

StructureDeedImplementation::operator const StructureDeed*() {
	return _this;
}

void StructureDeedImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void StructureDeedImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void StructureDeedImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void StructureDeedImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void StructureDeedImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void StructureDeedImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void StructureDeedImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void StructureDeedImplementation::_serializationHelperMethod() {
	DeedImplementation::_serializationHelperMethod();

	_setClassName("StructureDeed");

}

void StructureDeedImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(StructureDeedImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool StructureDeedImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (DeedImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "surplusMaintenance") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&surplusMaintenance, stream);
		return true;
	}

	if (_name == "surplusPower") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&surplusPower, stream);
		return true;
	}

	if (_name == "extractionRate") {
		TypeInfo<float >::parseFromBinaryStream(&extractionRate, stream);
		return true;
	}

	if (_name == "hopperSizeMax") {
		TypeInfo<float >::parseFromBinaryStream(&hopperSizeMax, stream);
		return true;
	}


	return false;
}

void StructureDeedImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = StructureDeedImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int StructureDeedImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "surplusMaintenance";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&surplusMaintenance, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "surplusPower";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&surplusPower, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "extractionRate";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&extractionRate, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "hopperSizeMax";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&hopperSizeMax, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 4 + DeedImplementation::writeObjectMembers(stream);
}

StructureDeedImplementation::StructureDeedImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		Logger.setLoggingName("StructureDeed");
	Logger::setLoggingName("StructureDeed");
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		surplusMaintenance = 0;
	surplusMaintenance = 0;
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		surplusPower = 0;
	surplusPower = 0;
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		extractionRate = 0;
	extractionRate = 0;
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		hopperSizeMax = 0;
	hopperSizeMax = 0;
}

int StructureDeedImplementation::placeStructure(CreatureObject* creature, float x, float y, int angle) {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return 
	if (placeStructureComponent != NULL){
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  			return placeStructureComponent.placeStructure(this, creature, x, y, angle);
	return placeStructureComponent->placeStructure(_this, creature, x, y, angle);
}
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return 1;
	return 1;
}

int StructureDeedImplementation::notifyStructurePlaced(CreatureObject* creature, StructureObject* structure) {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return 
	if (placeStructureComponent != NULL){
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  			return placeStructureComponent.notifyStructurePlaced(this, creature, structure);
	return placeStructureComponent->notifyStructurePlaced(_this, creature, structure);
}
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return 1;
	return 1;
}

void StructureDeedImplementation::setSurplusMaintenance(unsigned int maint) {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		surplusMaintenance = maint;
	surplusMaintenance = maint;
}

void StructureDeedImplementation::setSurplusPower(unsigned int power) {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		surplusPower = power;
	surplusPower = power;
}

void StructureDeedImplementation::setExtractionRate(float rate) {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		extractionRate = rate;
	extractionRate = rate;
}

void StructureDeedImplementation::setHopperSize(float size) {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		hopperSizeMax = size;
	hopperSizeMax = size;
}

unsigned int StructureDeedImplementation::getSurplusMaintenance() {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return surplusMaintenance;
	return surplusMaintenance;
}

unsigned int StructureDeedImplementation::getSurplusPower() {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return surplusPower;
	return surplusPower;
}

float StructureDeedImplementation::getExtractionRate() {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return extractionRate;
	return extractionRate;
}

float StructureDeedImplementation::getHopperSize() {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return hopperSizeMax;
	return hopperSizeMax;
}

bool StructureDeedImplementation::isStructureDeed() {
	// server/zone/objects/tangible/deed/structure/StructureDeed.idl():  		return true;
	return true;
}

/*
 *	StructureDeedAdapter
 */

StructureDeedAdapter::StructureDeedAdapter(StructureDeed* obj) : DeedAdapter(obj) {
}

Packet* StructureDeedAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		break;
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_PLACESTRUCTURE__CREATUREOBJECT_FLOAT_FLOAT_INT_:
		resp->insertSignedInt(placeStructure(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getFloatParameter(), inv->getFloatParameter(), inv->getSignedIntParameter()));
		break;
	case RPC_NOTIFYSTRUCTUREPLACED__CREATUREOBJECT_STRUCTUREOBJECT_:
		resp->insertSignedInt(notifyStructurePlaced(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<StructureObject*>(inv->getObjectParameter())));
		break;
	case RPC_SETSURPLUSMAINTENANCE__INT_:
		setSurplusMaintenance(inv->getUnsignedIntParameter());
		break;
	case RPC_SETSURPLUSPOWER__INT_:
		setSurplusPower(inv->getUnsignedIntParameter());
		break;
	case RPC_SETEXTRACTIONRATE__FLOAT_:
		setExtractionRate(inv->getFloatParameter());
		break;
	case RPC_SETHOPPERSIZE__FLOAT_:
		setHopperSize(inv->getFloatParameter());
		break;
	case RPC_GETSURPLUSMAINTENANCE__:
		resp->insertInt(getSurplusMaintenance());
		break;
	case RPC_GETSURPLUSPOWER__:
		resp->insertInt(getSurplusPower());
		break;
	case RPC_GETEXTRACTIONRATE__:
		resp->insertFloat(getExtractionRate());
		break;
	case RPC_GETHOPPERSIZE__:
		resp->insertFloat(getHopperSize());
		break;
	case RPC_ISSTRUCTUREDEED__:
		resp->insertBoolean(isStructureDeed());
		break;
	default:
		return NULL;
	}

	return resp;
}

int StructureDeedAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<StructureDeed*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void StructureDeedAdapter::initializeTransientMembers() {
	(static_cast<StructureDeed*>(stub))->initializeTransientMembers();
}

int StructureDeedAdapter::placeStructure(CreatureObject* creature, float x, float y, int angle) {
	return (static_cast<StructureDeed*>(stub))->placeStructure(creature, x, y, angle);
}

int StructureDeedAdapter::notifyStructurePlaced(CreatureObject* creature, StructureObject* structure) {
	return (static_cast<StructureDeed*>(stub))->notifyStructurePlaced(creature, structure);
}

void StructureDeedAdapter::setSurplusMaintenance(unsigned int maint) {
	(static_cast<StructureDeed*>(stub))->setSurplusMaintenance(maint);
}

void StructureDeedAdapter::setSurplusPower(unsigned int power) {
	(static_cast<StructureDeed*>(stub))->setSurplusPower(power);
}

void StructureDeedAdapter::setExtractionRate(float rate) {
	(static_cast<StructureDeed*>(stub))->setExtractionRate(rate);
}

void StructureDeedAdapter::setHopperSize(float size) {
	(static_cast<StructureDeed*>(stub))->setHopperSize(size);
}

unsigned int StructureDeedAdapter::getSurplusMaintenance() {
	return (static_cast<StructureDeed*>(stub))->getSurplusMaintenance();
}

unsigned int StructureDeedAdapter::getSurplusPower() {
	return (static_cast<StructureDeed*>(stub))->getSurplusPower();
}

float StructureDeedAdapter::getExtractionRate() {
	return (static_cast<StructureDeed*>(stub))->getExtractionRate();
}

float StructureDeedAdapter::getHopperSize() {
	return (static_cast<StructureDeed*>(stub))->getHopperSize();
}

bool StructureDeedAdapter::isStructureDeed() {
	return (static_cast<StructureDeed*>(stub))->isStructureDeed();
}

/*
 *	StructureDeedHelper
 */

StructureDeedHelper* StructureDeedHelper::staticInitializer = StructureDeedHelper::instance();

StructureDeedHelper::StructureDeedHelper() {
	className = "StructureDeed";

	Core::getObjectBroker()->registerClass(className, this);
}

void StructureDeedHelper::finalizeHelper() {
	StructureDeedHelper::finalize();
}

DistributedObject* StructureDeedHelper::instantiateObject() {
	return new StructureDeed(DummyConstructorParameter::instance());
}

DistributedObjectServant* StructureDeedHelper::instantiateServant() {
	return new StructureDeedImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* StructureDeedHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new StructureDeedAdapter(static_cast<StructureDeed*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

