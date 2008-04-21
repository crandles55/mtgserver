/*
 *	server/zone/objects/tangible/weapons/ranged/CarbineRangedWeapon.h generated by engine3 IDL compiler 0.55
 */

#ifndef CARBINERANGEDWEAPON_H_
#define CARBINERANGEDWEAPON_H_

#include "engine/orb/DistributedObjectBroker.h"

class CreatureObject;

class RangedWeapon;

#include "../RangedWeapon.h"

class CarbineRangedWeapon : public RangedWeapon {
protected:
	CarbineRangedWeapon();
	CarbineRangedWeapon(DistributedObjectServant* obj);
	CarbineRangedWeapon(CarbineRangedWeapon& ref);

	virtual ~CarbineRangedWeapon();

public:
	CarbineRangedWeapon* clone();

	friend class CarbineRangedWeaponHelper;
};

class CarbineRangedWeaponImplementation;

class CarbineRangedWeaponAdapter : public RangedWeaponAdapter {
public:
	CarbineRangedWeaponAdapter(CarbineRangedWeaponImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class CarbineRangedWeaponHelper : public DistributedObjectClassHelper, public Singleton<CarbineRangedWeaponHelper> {
public:
	CarbineRangedWeaponHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectServant* obj);

	friend class SingletonWrapper<CarbineRangedWeaponHelper>;
};

#include "../RangedWeaponImplementation.h"

class CarbineRangedWeaponServant : public RangedWeaponImplementation {
public:
	CarbineRangedWeapon* _this;

public:
	CarbineRangedWeaponServant(unsigned long long objid, unsigned int tempcrc, const unicode& n, const string& tempn, int tp, bool eqp);
	CarbineRangedWeaponServant(CreatureObject* creature, const string& temp, const unicode& n, const string& tempn, int tp, bool eqp);
	virtual ~CarbineRangedWeaponServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*CARBINERANGEDWEAPON_H_*/
