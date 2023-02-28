using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using GoogleMobileAds.Api;
using Random = UnityEngine.Random;

public class AdmobAds : MonoBehaviour
{
    public string AppID = "ca-app-pub-5299843518328057~8836439500";
    public string Intersititial_AD_ID = "ca-app-pub-5299843518328057/5994515715";
    public string RewardVideo_AD_ID = "ca-app-pub-5299843518328057/1125332416";


	bool earned = true;

	//test unit
	//public string AppID = "ca-app-pub-3940256099942544~3347511713";
	//public string Intersititial_AD_ID = "ca-app-pub-3940256099942544/1033173712";
	//public string RewardVideo_AD_ID = "ca-app-pub-3940256099942544/5224354917";

	public InterstitialAd interstitial;
	public RewardedAd rewardBasedVideo;
	public static AdmobAds instance;
	public static AdmobAds singleton;
	private static int AdsType = 1;



	private void Awake()
	{
		//if (singleton != null)
		//{
		//	Destroy(gameObject);

		//}
		//else
		//{
		//	singleton = this;
		//	DontDestroyOnLoad(gameObject);

		//}

		if (singleton == null)
		{
			singleton = this;

		}
		else
		{
			Destroy(gameObject);

			return;
		}

		DontDestroyOnLoad(gameObject);


	}

	void Start()
	{
		MobileAds.Initialize(InitializationStatus => {
			
		});

		 RequestInterstitial();
		 RequestRewardBasedVideo();

		//this.interstitial = new InterstitialAd(Intersititial_AD_ID);

		//// Called when an ad request has successfully loaded.
		//this.interstitial.OnAdLoaded += HandleOnAdLoaded;
		//// Called when an ad request failed to load.
		//this.interstitial.OnAdFailedToLoad += HandleOnAdFailedToLoad;
		//// Called when an ad is shown.
		//this.interstitial.OnAdOpening += HandleOnAdOpened;
		//// Called when the ad is closed.
		//this.interstitial.OnAdClosed += HandleOnAdClosed;


		//rewardBasedVideo.OnAdLoaded += RewardAdLoaded;
		//rewardBasedVideo.OnAdFailedToLoad += RewardAdFailedToLoad;
		//rewardBasedVideo.OnAdOpening += RewardAdOpened;
		//rewardBasedVideo.OnAdClosed += RewardAdClosed;

		//this.rewardBasedVideo.OnUserEarnedReward += HandleUserEarnedReward;


	}

	//public void SwitchValue()
	//{
	//	AdsType = AdsType == 1 ? 2 : 1;
	//}

	public void ShowADS()
	{

		int response = Random.Range(1, 4);

//		Debug.Log(response);

        if (response == 1)
        {
			ShowVideoRewardAd();

        }
        else
        {
			ShowInterstitialAd();

		}













		//switch (AdsType)
		//{
		//	case 1:
		//		if (interstitial.IsLoaded ())
		//		{

		//			//if (!Name.timeon())
		//			//{


		//				ShowInterstitialAd();

		//				}
		//		//}
		//		else
		//		{
		//			SwitchValue();
		//			ShowADS();
		//		}

		//		break;
		//	case 2:
		//		if (rewardBasedVideo.IsLoaded())
		//		{
		//			ShowVideoRewardAdMenu();
		//		}
		//		else
		//		{
		//			SwitchValue();
		//			ShowADS();
		//		}

		//		break;

		//}




	}


	public void RequestInterstitial()
	{

		if (interstitial != null)
		{
			interstitial.Destroy();
		}
		// Initialize an InterstitialAd.
		this.interstitial = new InterstitialAd(Intersititial_AD_ID);

		// Called when an ad request has successfully loaded.
		this.interstitial.OnAdLoaded += HandleOnAdLoaded;
		// Called when an ad request failed to load.
		this.interstitial.OnAdFailedToLoad += HandleOnAdFailedToLoad;
		// Called when an ad is shown.
		this.interstitial.OnAdOpening += HandleOnAdOpened;
		// Called when the ad is closed.
		this.interstitial.OnAdClosed += HandleOnAdClosed;
		// Called when the ad click caused the user to leave the application.
		//this.interstitial.OnAdLeavingApplication += HandleOnAdLeavingApplication; 

		AdRequest request = new AdRequest.Builder().Build();
		this.interstitial.LoadAd(request);


	}

	public void ShowInterstitialAd()
	{
		earned = false;
		if (interstitial != null && interstitial.IsLoaded())
		{
			this.interstitial.Show();
		}else
			RequestInterstitial();


	}

	public void ShowInterstitialAdUI()
	{
		earned = false;
		if (interstitial != null && interstitial.IsLoaded())
		{
			this.interstitial.Show();
		}
		else
			RequestInterstitial();


	}

	public void DestroyInterstitialAd()
	{
		if (interstitial != null)
		{
			interstitial.Destroy();
		}
	}




	public void RequestRewardBasedVideo()
	{

	

		rewardBasedVideo = new RewardedAd(RewardVideo_AD_ID);

		rewardBasedVideo.OnAdLoaded += RewardAdLoaded;
		rewardBasedVideo.OnAdFailedToLoad += RewardAdFailedToLoad;
		rewardBasedVideo.OnAdOpening += RewardAdOpened;
		rewardBasedVideo.OnAdClosed += RewardAdClosed;

		// Create an empty ad request.
		AdRequest request = new AdRequest.Builder().Build();
		// Load the rewarded video ad with the request.
		this.rewardBasedVideo.LoadAd(request);

        this.rewardBasedVideo.OnUserEarnedReward += HandleUserEarnedReward;

    }

	public void RewardAdClosed(object sender, EventArgs args)
	{
		MonoBehaviour.print("RewardAdClosed event received");
		//RequestRewardBasedVideo();
		//GlobalActionService.Instance.onAdFinished?.Invoke();
		RequestRewardBasedVideo();
		PhotonNetwork.BackgroundTimeout = 10f;
	}
	public void RewardAdOpened(object sender, EventArgs args)
	{
		MonoBehaviour.print("RewardAdOpened event received");
		//GlobalActionService.Instance.onAdShown?.Invoke();
		PhotonNetwork.BackgroundTimeout = 60f;
	}
	public void RewardAdLoaded(object sender, EventArgs args)
	{
		MonoBehaviour.print("RewardAdLoaded event received");
	}

	public void RewardAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
		MonoBehaviour.print("RewardAdFailedToLoad event received with message: "
							+ args.LoadAdError);
	
		//GlobalActionService.Instance.onAdFinished?.Invoke();
	}

	public void ShowVideoRewardAd()
	{
        earned = false;
        if (rewardBasedVideo.IsLoaded())
		{
			rewardBasedVideo.Show();
		}

        else RequestRewardBasedVideo();
    }

	public void ShowVideoRewardAdMenu()
	{
        earned = true;
        if (rewardBasedVideo != null && rewardBasedVideo.IsLoaded())
		{
			rewardBasedVideo.Show();
		}else
			RequestRewardBasedVideo();


	}




	public void HandleOnAdLoaded(object sender, EventArgs args)
	{
		MonoBehaviour.print("HandleAdLoaded event received");
	}

	public void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
	{
		MonoBehaviour.print("HandleFailedToReceiveAd event received with message: "
							+ args.LoadAdError);
	
		//GlobalActionService.Instance.onAdFinished?.Invoke();
	}

	public void HandleOnAdOpened(object sender, EventArgs args)
	{
		MonoBehaviour.print("HandleAdOpened event received");
		//GlobalActionService.Instance.onAdShown?.Invoke();
		PhotonNetwork.BackgroundTimeout = 60f;
	//	GameSettings.rc.PrepareRespawn(0, true, false);

	}

	public void HandleOnAdClosed(object sender, EventArgs args)
	{
		MonoBehaviour.print("HandleAdClosed event received");
		//RequestInterstitial();
		//GlobalActionService.Instance.onAdFinished?.Invoke();
		RequestInterstitial();
		PhotonNetwork.BackgroundTimeout = 10f;


	}

	public void HandleOnAdLeavingApplication(object sender, EventArgs args)
	{
		MonoBehaviour.print("HandleAdLeavingApplication event received");
	}


	public void HandleUserEarnedReward(object sender, Reward args)
	{	
		try
		{
            if (earned)
            {
                ADManager.instance.rewardUser();
		string type = args.Type;
		double amount = args.Amount;
		MonoBehaviour.print(
			"HandleRewardedAdRewarded event received for "
						+ amount.ToString() + " " + type);
            }
            else
            {
				Debug.Log("0 rewards");
            }
        }
        catch (Exception e)
		{

		}
	}}
