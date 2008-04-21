/*
 *	server/zone/objects/tangible/weapons/melee/OneHandedMeleeWeapon.h generated by engine3 IDL compiler 0.55
 */

#ifndef ONEHANDEDMELEEWEAPON_H_
#define ONEHANDEDMELEEWEAPON_H_

#include "engine/orb/DistributedObjectBroker.h"

class CreatureObject;

class MeleeWeapon;

#include "../MeleeWeapon.h"

class OneHandedMeleeWeapon : public MeleeWeapon {
protected:
	OneHandedMeleeWeapon();
	OneHandedMeleeWeapon(DistributedObjectServant* obj);
	OneHandedMeleeWeapon(OneHandedMeleeWeapon& ref);

	virtual ~OneHandedMeleeWeapon();

public:
	OneHandedMeleeWeapon* clone();

	friend class OneHandedMeleeWeaponHelper;
};

class OneHandedMeleeWeaponImplementation;

class OneHandedMeleeWeaponAdapter : public MeleeWeaponAdapter {
public:
	OneHandedMeleeWeaponAdapter(OneHandedMeleeWeaponImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class OneHandedMeleeWeaponHelper : public DistributedObjectClassHelper, public Singleton<OneHandedMeleeWeaponHelper> {
public:
	OneHandedMeleeWeaponHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectServant* obj);

	friend class SingletonWrapper<OneHandedMeleeWeaponHelper>;
};

#include "../MeleeWeaponImplementation.h"

class OneHandedMeleeWeaponServant : public MeleeWeaponImplementation {
public:
	OneHandedMeleeWeapon* _this;

public:
	OneHandedMeleeWeaponServant(unsigned long long objid, unsigned int tempcrc, const unicode& n, const string& tempn, int tp, bool eqp);
	OneHandedMeleeWeaponServant(CreatureObject* creature, const string& temp, const unicode& n, const string& tempn, int tp, bool eqp);
	virtual ~OneHandedMeleeWeaponServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*ONEHANDEDMELEEWEAPON_H_*/
