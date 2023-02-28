using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlobalActionService
{
    /* SINGLETON */
    private static GlobalActionService _instance;

    public static GlobalActionService Instance
    {
        get
        {
            if(_instance == null)
            {
                _instance = new GlobalActionService();
            }
            return _instance;
        }
    }

    /* ACTIONS */

    public Action onAdFinished;
    public Action onAdShown;
}
