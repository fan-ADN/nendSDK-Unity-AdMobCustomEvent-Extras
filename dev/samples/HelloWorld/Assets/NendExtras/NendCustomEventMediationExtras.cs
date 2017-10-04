using System;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api.Mediation;

namespace NendMediationExtras
{
	public class NendCustomEventMediationExtras : MediationExtras {

		public NendCustomEventMediationExtras()
		{
			this.Extras = new Dictionary<string, string> ();
		}

		public string UserId
		{
			set 
			{ 
				this.Extras.Add("nend_rewarded_video_ad_user_id", value);
			}
		}

		public override string IOSMediationExtraBuilderClassName
		{
			get
			{
				return "GADMUAdapterNendCustomEventExtras";
			}
		}

		public override string AndroidMediationExtraBuilderClassName
		{
			get
			{
				return "net.nend.android.unityextracustomevent.GADMUAdapterNendCustomEventExtras";
			}
		}
	}
}

