package net.nend.android.unityextracustomevent;

import android.os.Bundle;
import android.text.TextUtils;

import net.nend.android.mediation.NendRewardedVideoAdapter;

import java.util.HashMap;

@SuppressWarnings("unused")
public class GADMUAdapterNendCustomEventExtras {
    public Bundle buildExtras(HashMap<String, String> extras) {
        Bundle bundle = new Bundle();

        String userId = extras.get(NendRewardedVideoAdapter.EXTRA_KEY_NEND_USER_ID);
        if (!TextUtils.isEmpty(userId)) {
            bundle.putString(NendRewardedVideoAdapter.EXTRA_KEY_NEND_USER_ID, userId);
        }

        return bundle;
    }

    public Class getAdapterClass() {
        return NendRewardedVideoAdapter.class;
    }
}
