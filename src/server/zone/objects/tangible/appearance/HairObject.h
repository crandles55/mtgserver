/*
 *	server/zone/objects/tangible/appearance/HairObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef HAIROBJECT_H_
#define HAIROBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class CreatureObject;

class TangibleObject;

#include "../TangibleObject.h"

class HairObject : public TangibleObject {
protected:
	HairObject();
	HairObject(DistributedObjectServant* obj);
	HairObject(HairObject& ref);

	virtual ~HairObject();

public:
	HairObject* clone();

	friend class HairObjectHelper;
};

class HairObjectImplementation;

class HairObjectAdapter : public TangibleObjectAdapter {
public:
	HairObjectAdapter(HairObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class HairObjectHelper : public DistributedObjectClassHelper, public Singleton<HairObjectHelper> {
public:
	HairObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectServant* obj);

	friend class SingletonWrapper<HairObjectHelper>;
};

#include "../TangibleObjectImplementation.h"

class HairObjectServant : public TangibleObjectImplementation {
public:
	HairObject* _this;

public:
	HairObjectServant(unsigned long long oid, int tp);
	virtual ~HairObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*HAIROBJECT_H_*/
