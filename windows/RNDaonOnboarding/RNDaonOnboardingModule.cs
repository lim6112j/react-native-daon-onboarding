using ReactNative.Bridge;
using System;
using System.Collections.Generic;
using Windows.ApplicationModel.Core;
using Windows.UI.Core;

namespace Daon.Onboarding.RNDaonOnboarding
{
    /// <summary>
    /// A module that allows JS to share data.
    /// </summary>
    class RNDaonOnboardingModule : NativeModuleBase
    {
        /// <summary>
        /// Instantiates the <see cref="RNDaonOnboardingModule"/>.
        /// </summary>
        internal RNDaonOnboardingModule()
        {

        }

        /// <summary>
        /// The name of the native module.
        /// </summary>
        public override string Name
        {
            get
            {
                return "RNDaonOnboarding";
            }
        }
    }
}
