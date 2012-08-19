/*
 * Appcelerator Kroll - licensed under the Apache Public License 2
 * see LICENSE in the root folder for details on the license.
 * Copyright (c) 2009 Appcelerator, Inc. All Rights Reserved.
 */

#ifndef _GLOBAL_OBJECT_H_
#define _GLOBAL_OBJECT_H_

namespace tide
{
	class TIDE_API GlobalObject : public KEventObject
	{
	public:
		GlobalObject();
		~GlobalObject();
		static void TurnOnProfiling();

		inline static AutoPtr<GlobalObject> GetInstance()
		{
			return GlobalObject::instance;
		}

		inline static void Initialize()
		{
			instance = new GlobalObject();
		}

	private:
		static AutoPtr<GlobalObject> instance;

		void GetVersion(const ValueList& args, ValueRef result);
		void GetPlatform(const ValueList& args, ValueRef result);
	};
}

#endif
