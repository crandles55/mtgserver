/*
 *	server/zone/managers/creature/CreatureManager.cpp generated by engine3 IDL compiler 0.55
 */

#include "../../Zone.h"

#include "../../objects/creature/Creature.h"

#include "../../objects/creature/CreatureObject.h"

#include "../../objects/creature/CreatureGroup.h"

#include "../../objects/creature/trainer/TrainerCreature.h"

#include "../../objects/creature/recruiter/RecruiterCreature.h"

#include "../../objects/creature/shuttle/ShuttleCreature.h"

#include "CreatureManager.h"

#include "CreatureManagerImplementation.h"

/*
 *	CreatureManagerStub
 */

CreatureManager::CreatureManager() : DistributedObjectStub(NULL) {
}

CreatureManager::CreatureManager(DistributedObjectServant* obj) : DistributedObjectStub(obj) {
}

CreatureManager::CreatureManager(CreatureManager& ref) : DistributedObjectStub(ref) {
}

CreatureManager::~CreatureManager() {
}

CreatureManager* CreatureManager::clone() {
	return new CreatureManager(*this);
}


void CreatureManager::init() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->init();
}

void CreatureManager::loadCreatures() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->loadCreatures();
}

void CreatureManager::start() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->start();
}

void CreatureManager::stop() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->stop();
}

void CreatureManager::loadTrainers() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->loadTrainers();
}

void CreatureManager::loadRecruiters() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->loadRecruiters();
}

void CreatureManager::unloadCreature(Creature* creature) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 12);
		method.addObjectParameter(creature);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->unloadCreature(creature);
}

Creature* CreatureManager::spawnCreature(const string& stfname, const string& name, int objCrc, float x, float y, int bitmask, bool doLock) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 13);
		method.addAsciiParameter(stfname);
		method.addAsciiParameter(name);
		method.addSignedIntParameter(objCrc);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addSignedIntParameter(bitmask);
		method.addBooleanParameter(doLock);

		return (Creature*) method.executeWithObjectReturn();
	} else
		return ((CreatureManagerImplementation*) _impl)->spawnCreature(stfname, name, objCrc, x, y, bitmask, doLock);
}

TrainerCreature* CreatureManager::spawnTrainer(const string& profession, const string& stfname, const string& name, int objCrc, float x, float y, bool doLock) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 14);
		method.addAsciiParameter(profession);
		method.addAsciiParameter(stfname);
		method.addAsciiParameter(name);
		method.addSignedIntParameter(objCrc);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addBooleanParameter(doLock);

		return (TrainerCreature*) method.executeWithObjectReturn();
	} else
		return ((CreatureManagerImplementation*) _impl)->spawnTrainer(profession, stfname, name, objCrc, x, y, doLock);
}

ShuttleCreature* CreatureManager::spawnShuttle(const string& Planet, const string& City, Coordinate* playerSpawnPoint, float x, float y, float z, bool doLock) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 15);
		method.addAsciiParameter(Planet);
		method.addAsciiParameter(City);
		method.addObjectParameter(playerSpawnPoint);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addFloatParameter(z);
		method.addBooleanParameter(doLock);

		return (ShuttleCreature*) method.executeWithObjectReturn();
	} else
		return ((CreatureManagerImplementation*) _impl)->spawnShuttle(Planet, City, playerSpawnPoint, x, y, z, doLock);
}

RecruiterCreature* CreatureManager::spawnRecruiter(const string& stfname, const string& name, int objCrc, float x, float y, bool doLock) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 16);
		method.addAsciiParameter(stfname);
		method.addAsciiParameter(name);
		method.addSignedIntParameter(objCrc);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addBooleanParameter(doLock);

		return (RecruiterCreature*) method.executeWithObjectReturn();
	} else
		return ((CreatureManagerImplementation*) _impl)->spawnRecruiter(stfname, name, objCrc, x, y, doLock);
}

CreatureGroup* CreatureManager::spawnCreatureGroup(int count, const string& stfname, const string& name, int objCrc, float x, float y, int bitmask, int layout) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 17);
		method.addSignedIntParameter(count);
		method.addAsciiParameter(stfname);
		method.addAsciiParameter(name);
		method.addSignedIntParameter(objCrc);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addSignedIntParameter(bitmask);
		method.addSignedIntParameter(layout);

		return (CreatureGroup*) method.executeWithObjectReturn();
	} else
		return ((CreatureManagerImplementation*) _impl)->spawnCreatureGroup(count, stfname, name, objCrc, x, y, bitmask, layout);
}

void CreatureManager::registerFunctions() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 18);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->registerFunctions();
}

void CreatureManager::registerGlobals() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 19);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->registerGlobals();
}

void CreatureManager::loadCreatureFile() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 20);

		method.executeWithVoidReturn();
	} else
		((CreatureManagerImplementation*) _impl)->loadCreatureFile();
}

Creature* CreatureManager::getCreature(unsigned long long oid) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		DistributedMethod method(this, 21);
		method.addUnsignedLongParameter(oid);

		return (Creature*) method.executeWithObjectReturn();
	} else
		return ((CreatureManagerImplementation*) _impl)->getCreature(oid);
}

/*
 *	CreatureManagerAdapter
 */

CreatureManagerAdapter::CreatureManagerAdapter(CreatureManagerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* CreatureManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		init();
		break;
	case 7:
		loadCreatures();
		break;
	case 8:
		start();
		break;
	case 9:
		stop();
		break;
	case 10:
		loadTrainers();
		break;
	case 11:
		loadRecruiters();
		break;
	case 12:
		unloadCreature((Creature*) inv->getObjectParameter());
		break;
	case 13:
		resp->insertLong(spawnCreature(inv->getAsciiParameter(_param0_spawnCreature__string_string_int_float_float_int_bool_), inv->getAsciiParameter(_param1_spawnCreature__string_string_int_float_float_int_bool_), inv->getSignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 14:
		resp->insertLong(spawnTrainer(inv->getAsciiParameter(_param0_spawnTrainer__string_string_string_int_float_float_bool_), inv->getAsciiParameter(_param1_spawnTrainer__string_string_string_int_float_float_bool_), inv->getAsciiParameter(_param2_spawnTrainer__string_string_string_int_float_float_bool_), inv->getSignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 15:
		resp->insertLong(spawnShuttle(inv->getAsciiParameter(_param0_spawnShuttle__string_string_Coordinate_float_float_float_bool_), inv->getAsciiParameter(_param1_spawnShuttle__string_string_Coordinate_float_float_float_bool_), (Coordinate*) inv->getObjectParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 16:
		resp->insertLong(spawnRecruiter(inv->getAsciiParameter(_param0_spawnRecruiter__string_string_int_float_float_bool_), inv->getAsciiParameter(_param1_spawnRecruiter__string_string_int_float_float_bool_), inv->getSignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 17:
		resp->insertLong(spawnCreatureGroup(inv->getSignedIntParameter(), inv->getAsciiParameter(_param1_spawnCreatureGroup__int_string_string_int_float_float_int_int_), inv->getAsciiParameter(_param2_spawnCreatureGroup__int_string_string_int_float_float_int_int_), inv->getSignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter())->_getObjectID());
		break;
	case 18:
		registerFunctions();
		break;
	case 19:
		registerGlobals();
		break;
	case 20:
		loadCreatureFile();
		break;
	case 21:
		resp->insertLong(getCreature(inv->getUnsignedLongParameter())->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CreatureManagerAdapter::init() {
	return ((CreatureManagerImplementation*) impl)->init();
}

void CreatureManagerAdapter::loadCreatures() {
	return ((CreatureManagerImplementation*) impl)->loadCreatures();
}

void CreatureManagerAdapter::start() {
	return ((CreatureManagerImplementation*) impl)->start();
}

void CreatureManagerAdapter::stop() {
	return ((CreatureManagerImplementation*) impl)->stop();
}

void CreatureManagerAdapter::loadTrainers() {
	return ((CreatureManagerImplementation*) impl)->loadTrainers();
}

void CreatureManagerAdapter::loadRecruiters() {
	return ((CreatureManagerImplementation*) impl)->loadRecruiters();
}

void CreatureManagerAdapter::unloadCreature(Creature* creature) {
	return ((CreatureManagerImplementation*) impl)->unloadCreature(creature);
}

Creature* CreatureManagerAdapter::spawnCreature(const string& stfname, const string& name, int objCrc, float x, float y, int bitmask, bool doLock) {
	return ((CreatureManagerImplementation*) impl)->spawnCreature(stfname, name, objCrc, x, y, bitmask, doLock);
}

TrainerCreature* CreatureManagerAdapter::spawnTrainer(const string& profession, const string& stfname, const string& name, int objCrc, float x, float y, bool doLock) {
	return ((CreatureManagerImplementation*) impl)->spawnTrainer(profession, stfname, name, objCrc, x, y, doLock);
}

ShuttleCreature* CreatureManagerAdapter::spawnShuttle(const string& Planet, const string& City, Coordinate* playerSpawnPoint, float x, float y, float z, bool doLock) {
	return ((CreatureManagerImplementation*) impl)->spawnShuttle(Planet, City, playerSpawnPoint, x, y, z, doLock);
}

RecruiterCreature* CreatureManagerAdapter::spawnRecruiter(const string& stfname, const string& name, int objCrc, float x, float y, bool doLock) {
	return ((CreatureManagerImplementation*) impl)->spawnRecruiter(stfname, name, objCrc, x, y, doLock);
}

CreatureGroup* CreatureManagerAdapter::spawnCreatureGroup(int count, const string& stfname, const string& name, int objCrc, float x, float y, int bitmask, int layout) {
	return ((CreatureManagerImplementation*) impl)->spawnCreatureGroup(count, stfname, name, objCrc, x, y, bitmask, layout);
}

void CreatureManagerAdapter::registerFunctions() {
	return ((CreatureManagerImplementation*) impl)->registerFunctions();
}

void CreatureManagerAdapter::registerGlobals() {
	return ((CreatureManagerImplementation*) impl)->registerGlobals();
}

void CreatureManagerAdapter::loadCreatureFile() {
	return ((CreatureManagerImplementation*) impl)->loadCreatureFile();
}

Creature* CreatureManagerAdapter::getCreature(unsigned long long oid) {
	return ((CreatureManagerImplementation*) impl)->getCreature(oid);
}

/*
 *	CreatureManagerHelper
 */

CreatureManagerHelper::CreatureManagerHelper() {
	className = "CreatureManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CreatureManagerHelper::finalizeHelper() {
	CreatureManagerHelper::finalize();
}

DistributedObject* CreatureManagerHelper::instantiateObject() {
	return new CreatureManager();
}

DistributedObjectAdapter* CreatureManagerHelper::createAdapter(DistributedObjectServant* obj) {
	DistributedObjectAdapter* adapter = new CreatureManagerAdapter((CreatureManagerImplementation*) obj);

	DistributedObjectStub* stub = new CreatureManager(obj);
	stub->_setClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	CreatureManagerServant
 */

CreatureManagerServant::CreatureManagerServant() {
	_classHelper = CreatureManagerHelper::instance();
}

CreatureManagerServant::~CreatureManagerServant() {
}

void CreatureManagerServant::_setStub(DistributedObjectStub* stub) {
	_this = (CreatureManager*) stub;
}

DistributedObjectStub* CreatureManagerServant::_getStub() {
	return _this;
}

