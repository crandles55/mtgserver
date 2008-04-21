/*
 *	server/zone/objects/tangible/MissionBag.h generated by engine3 IDL compiler 0.55
 */

#ifndef MISSIONBAG_H_
#define MISSIONBAG_H_

#include "engine/orb/DistributedObjectBroker.h"

class Container;

class CreatureObject;

#include "Container.h"

class MissionBag : public Container {
protected:
	MissionBag();
	MissionBag(DistributedObjectServant* obj);
	MissionBag(MissionBag& ref);

	virtual ~MissionBag();

public:
	MissionBag* clone();

	friend class MissionBagHelper;
};

class MissionBagImplementation;

class MissionBagAdapter : public ContainerAdapter {
public:
	MissionBagAdapter(MissionBagImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class MissionBagHelper : public DistributedObjectClassHelper, public Singleton<MissionBagHelper> {
public:
	MissionBagHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectServant* obj);

	friend class SingletonWrapper<MissionBagHelper>;
};

#include "ContainerImplementation.h"

class MissionBagServant : public ContainerImplementation {
public:
	MissionBag* _this;

public:
	MissionBagServant(unsigned long long oid);
	virtual ~MissionBagServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*MISSIONBAG_H_*/
